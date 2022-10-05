/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	void change(queue<TreeNode*> &q,int &val)
	{
		while(!q.empty())
		{
			auto x=q.front();
			q.pop();
			{
				auto t=x->left;
				TreeNode* node = new TreeNode(val);
				x->left=node;
				node->left=t;
			}
			{
				auto t=x->right;
				TreeNode* node = new TreeNode(val);
				x->right=node;
				node->right=t;
			}
		}
	}
	TreeNode* addOneRow(TreeNode* root, int val, int depth) {
		if(depth==1)
		{
			TreeNode* node = new TreeNode(val);
			node->left=root;
			return node;
		}
		queue<TreeNode*> q;
		q.push(root);
		int c=1;
		while(!q.empty())
		{
			int n=q.size();
			if(c==depth-1)
			{
				change(q,val);
				return root;
			}
			while(n--)
			{
				auto x=q.front();
				q.pop();
				if(x->left)
					q.push(x->left);
				if(x->right)
					q.push(x->right);
			}
			c++;
		}
		return root;
	}
};