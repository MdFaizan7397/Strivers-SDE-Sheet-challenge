class Solution {
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
};