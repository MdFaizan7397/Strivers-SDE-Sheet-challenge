class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return-1;
        
    }
};