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
//OPTIMIZED APPROACH : 2 POINTER (i and firstpos)
class Solution {
public:
    
int minSubArrayLen(int target, vector<int>& nums) {
    int firstPos = 0, sum = 0, minLength = INT_MAX;
    for(int i = 0; i<nums.size(); i++) {
        sum += nums[i];
        while(sum >= target) {
            minLength = min(minLength, i - firstPos + 1);
            sum -= nums[firstPos++];
        }
    }
    
    return minLength == INT_MAX? 0 : minLength;
  }
};