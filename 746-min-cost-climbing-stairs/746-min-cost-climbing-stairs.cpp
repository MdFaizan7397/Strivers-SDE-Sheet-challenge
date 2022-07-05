/*class Solution {   // RECURSION
private:
     int solve(vector<int>&cost,int n){
        //base case
        if(n==0){
            return cost[0];
            
        }
        if(n==1){
            return cost[1];
        }
        int ans=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
public:
   
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans=min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
};*/



/*class Solution {   // MEMOIZATION
private:
     int solve(vector<int>&cost,int n,vector<int>&dp ) {
        //base case
        if(n==0){
            return cost[0];
            
        }
        if(n==1){
            return cost[1];
        }
         // STEP3
         if(dp[n]!=-1){
             return dp[n];
         }
         //STEP2
         dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }
public:
   
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //STEP 1
        vector<int>dp(n+1,-1); 
        int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    }
};*/


class Solution {   // TABULATION 
private:
     int solve(vector<int>&cost,int n, vector<int>&dp ) {
        //STEP2 BASE CASE ANALYSIS AND PUTTING INSIDE DP ARRAY
       dp[0]=cost[0];
       dp[1]=cost[1];
         
         // STEP3 creating for loop for rest of the array element calls
         for(int i=2;i<=n-1;i++){
             dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
         }
         
        return min(dp[n-1],dp[n-2]);
    }
public:
   
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //STEP1 CREATION OF DP ARRAY
        vector<int>dp(n+1);
        return solve(cost,n,dp);
    }
};






