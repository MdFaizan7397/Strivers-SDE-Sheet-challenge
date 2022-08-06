//BRUTE FORCE AAPROACH

/*class Solution {
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
};*/


//OPTIMIZED APPROACH

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //TORTOISE METHOD  //Optimized Approach
        //using slow and fast pointer
        //slow moves by 1 step
        //fast moves by 2 steps
        
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }while(slow!=fast);
        
        //Now here slow and fast both moves by 1 step
        //intialise fast = nums[0];
          fast=nums[0];
          while(slow!=fast){
              slow=nums[slow];
              fast=nums[fast];
          }
        return slow;
    }
};