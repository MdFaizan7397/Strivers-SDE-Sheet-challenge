/*class Solution { //RECURSION 
private:
    int solve(vector<int>&nums,int target){
        //BASE CASE
        if(target<0){
            return 0;
        }
        if(target==0){
            return 1;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+solve(nums,target-nums[i]);
        }
        return ans;
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        return solve(nums,target);
    }
};*/


class Solution { //MEMOIZATION
private:
    int solve(vector<int>&nums,int target,vector<int>&dp){
        //BASE CASE
        if(target<0){
            return 0;
        }
        if(target==0){
            return 1;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+solve(nums,target-nums[i],dp);
        }
        dp[target]=ans;
        return dp[target];
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return solve(nums,target,dp);
    }
};


    

