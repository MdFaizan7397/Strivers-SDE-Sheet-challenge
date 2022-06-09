class Solution {    //Kadanes Algorithm
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;  // if by chance sum value becomes negative than assign sum to zero.
            }
        }
        return maxi;
               
    }
};