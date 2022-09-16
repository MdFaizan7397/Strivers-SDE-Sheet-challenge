class Solution {
public:
 int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
        
        /*Tabulation method*/
        vector<int> next(m+1);
        vector<int> curr(m+1);
        int L,R;
        
        for(int i=m-1 ; i>=0 ; i--) {
            vector<int> curr(m+1);
            for(int l = i ; l>=0 ; l--) {
                L = nums[l]*multipliers[i] + next[l+1];
                R = nums[n-1-i+l]*multipliers[i] + next[l];
                curr[l] = max(L,R);
            }
            next = curr;
        }
        
        return next[0];
    }
};