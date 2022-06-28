class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int hei = nums.size() - 2;
        
        while(low <= hei){
            int mid = (low + hei) / 2;
            if(nums[mid] == nums[mid^1]){
                low = mid + 1;
            }else{
                hei = mid - 1;
            }
        }
        
        return nums[low];
        
    }
};