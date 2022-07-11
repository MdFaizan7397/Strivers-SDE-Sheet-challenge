/*class Solution { //RECURSION
private:
    int solve(vector<int>& days, vector<int>& costs,int index){
        int n=days.size();
        //BASE CASE // WHEN YOU ARE AT STANDING AT LAST DAY OF YOUR TRIP 
                    //WHERE YOU DONT NEED ANY MORE TRAIN TICKETS AS YOUR TOUR IS OVER NOW.
        if(index>=n){
            return 0;//you need 0 ticket as tour is over        }
    }
        
        // 1 day pass
        int option1=costs[0]+solve(days,costs,index+1);
        
        int i;
        //7 day pass
        for(i=index;i<n && days[i] < days[index] +7;i++);
        
        int option2=costs[1]+solve(days,costs,i);
        
        //30 days pass
        for(i=index;i<n && days[i] < days[index] +30;i++);
        
        int option3=costs[2]+solve(days,costs,i);
        
        return min(option1,min(option2,option3));
    }
    
public:
    int mincostTickets(vector<int> &days, vector<int> &costs) {
        return solve(days,costs,0);
        
    }
};*/



/*class Solution { //MEMOIZATION
private:
    int solve(vector<int> &days, vector<int> &costs,int index,vector<int> &dp){
        int n=days.size();
        //BASE CASE // WHEN YOU ARE AT STANDING AT LAST DAY OF YOUR TRIP 
                    //WHERE YOU DONT NEED ANY MORE TRAIN TICKETS AS YOUR TOUR IS OVER NOW.
        if(index>=n){
            return 0;      //you need 0 ticket as tour is over        
    }
        if(dp[index]!=-1){
            return dp[index];
        }
        
        // 1 day pass
        int option1=costs[0]+solve(days,costs,index+1,dp);
        
        int i;
        //7 day pass
        for(i=index;i<n && days[i] < days[index] +7;i++);
        
        int option2=costs[1]+solve(days,costs,i,dp);
        
        //30 days pass
        for(i=index;i<n && days[i] < days[index] +30;i++);
        
        int option3=costs[2]+solve(days,costs,i,dp);
        
        dp[index]= min(option1,min(option2,option3));
        return dp[index];
    }
    
public:
    int mincostTickets(vector<int> &days, vector<int> &costs) {
        int n=days.size();
        vector<int> dp(n+1,-1);
        return solve(days,costs,0,dp);
        
    }
};*/



class Solution { //TABULATION
private:
    int solve(int n,vector<int> &days, vector<int> &costs){
        vector<int>dp(n+1,INT_MAX); // since in the question it is asked to calc min so we used            INT_MAX
        dp[n]=0;
          for(int k=n-1;k>=0;k--){
              // 1 day pass
        int option1=costs[0]+dp[k+1];
        
        int i;
        //7 day pass
        for(i=k;i<n && days[i] < days[k] +7;i++);
        
        int option2=costs[1]+dp[i];
        
        //30 days pass
        for(i=k;i<n && days[i] < days[k] +30;i++);
        
        int option3=costs[2]+dp[i];
        
        dp[k]= min(option1,min(option2,option3));
          }
        return dp[0];
        
    }
    
public:
    int mincostTickets(vector<int> &days, vector<int> &costs) {
        int n=days.size();
        return solve(n,days,costs);
        
    }
};