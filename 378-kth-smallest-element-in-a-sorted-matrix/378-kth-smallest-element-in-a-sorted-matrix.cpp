//BRUTE FORCE
/*class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        long long int n = matrix.size();
        long long int i,j;
        vector<int>s;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                long long int a = matrix[i][j];
                s.push_back(a);  //Pushing the elements one by one in the vector s
            }
        }
        sort(s.begin(), s.end());
        return s[k-1];   //k-1 is the index of the kth smallest number
    }
};*/

//OPTIMAL APPROACH

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         priority_queue<int>p;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 p.push(matrix[i][j]);  
                if(p.size()>k){
                    p.pop();
                }
            } 
        }
        return p.top();
    }
};