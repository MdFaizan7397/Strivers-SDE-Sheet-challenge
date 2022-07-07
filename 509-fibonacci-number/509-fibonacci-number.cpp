/*class Solution {  //RECURSIVE CODE
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
    
};*/


/*class Solution { //MEMOIZATION CODE
public:
    int fib(int n) {
        if(n==0 or n==1)
            return n;
        vector<int>dp(n+1,-1);
        if(dp[n]!=-1){
            return dp[n];
        }
       dp[n]=fib(n-1)+fib(n-2);
        
        
        return dp[n];
    }
};*/


class Solution { //TABULATION CODE 
public:
    int fib(int n) {
        if(n==0 or n==1)
            return n;
        vector<int>dp(n+1,0);
       
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]+=dp[i-1]+dp[i-2];
        return dp[n];
    }
};




