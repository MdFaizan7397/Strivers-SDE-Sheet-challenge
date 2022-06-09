class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0;
        int mid=0;  // Both low and mid ointer will be pointing to index 0
        int hi=nums.size()-1; // high pointer will be pointing to last eleement of array.
        
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo],nums[mid]);
                lo++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[hi]);
                hi--;
                
            }
        }
        
        
    }
};