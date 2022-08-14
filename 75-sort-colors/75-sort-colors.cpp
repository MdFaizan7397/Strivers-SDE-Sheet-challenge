//OPTIMIZED APPROACH
/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i : nums){
            if( i == 0) zero++;
            if( i == 1) one++;
            if( i == 2) two++;
        }
        
        for(int i = 0; i<nums.size(); i++){
            if( zero != 0){
                nums[i] = 0;
                zero--;
            }
            else if( one != 0){
                nums[i] = 1;
                one--;
            }
            else{
                nums[i] = 2;
                two--;
            }
        }
    }
};*/
//BEST APPROACH : DUTCH NATIONAL FLAG ALGORITHM
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