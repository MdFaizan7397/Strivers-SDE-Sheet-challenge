/*BRUTE FORCE
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        
         int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum>=target){
                    mini=min(mini,j-i+1);
                }
                
            }
        }
        return mini == INT_MAX? 0 : mini;
    }
};*/
//OPTIMIZED APPROACH : 2 POINTER
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, n = nums.size(), sum = 0, mini = INT_MAX;
        while (r < n) {
            sum += nums[r++];
            while (sum >= target) {
                mini = min(mini, r - l);
                sum -= nums[l++];
            }
        }
        return mini == INT_MAX ? 0 : mini;
    }
};