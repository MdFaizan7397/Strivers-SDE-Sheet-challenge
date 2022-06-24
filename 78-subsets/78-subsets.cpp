class Solution {
public:
    void help(int i,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
           //Base Case
        if(i==nums.size()){
            ans.push_back(temp); 
        }
        else {
                 //considering the first element(i th)to be present in a subset
            temp.push_back(nums[i]);  //1 st case solved by me
            help(i+1,nums,temp,ans);  //Recusive call ,now recursion will do rest work
            
            //not considering the first element (i th) element in a subset
            temp.pop_back(); //here we popped the ith element that was inserted earlier.
            help(i+1,nums,temp,ans);//recursive call
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        help(0,nums,temp,ans);
        return ans;
        
        
    }
};