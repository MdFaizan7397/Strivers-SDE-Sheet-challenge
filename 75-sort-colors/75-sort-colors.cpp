class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        //we need 3 pointers
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            switch(nums[mid]){
                
                //when mid pointer is pointing to 0
                case 0: swap(nums[low],nums[mid]);
                mid++;
                low++;
                break;
                
                //when mid pointer is pointing to 1
                case 1: mid++;
                break;
                
                //when mid pointer is pointing to 2
                case 2 : swap(nums[high],nums[mid]);
                high--;
                break;
            }
        }
    }
};