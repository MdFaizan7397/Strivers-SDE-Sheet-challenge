//https://www.youtube.com/watch?v=6qXO72FkqwM
/*class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        
        int i=1;
        int lastInc=-1; //Right most is nothing but the lastIncuded.
        while(i<n){  //Find the peak of last ascending order element.
            if(nums[i]>nums[i-1]){
                lastInc=i;
            }
            i+=1;
            
        }
        if(lastInc==-1){ //check if array is in decending order,than there will be no peaks.
                         //then simply sort the array and return.
            for(i=0;i<n/2;i++){
                swap(nums[i],nums[n-i+1]); //swapping the array if no peak is found.
            }
            return;
            
        }
        
        // SPECIAL CASE 
        //Find the element in the range (nums[lastInc-1] to nums[lastInc]) to the right.
        int mn=nums[lastInc];
        int index= lastInc;
        for(i=lastInc;i<n;i++){
            if(nums[i]>nums[lastInc-1] and nums[i]<nums[index]){ //move to the descending curve at right and see if any element is smaller than  the given peak than that peak will be replaced by that element.
                index=i;
            }
        }
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
        
    }
};*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        
        int i=1;
        int lastInc = -1;
        while(i<n) {    //Find the peak of last ASC order
            if(nums[i]>nums[i-1])
                lastInc = i;
            i+=1;
        }
        
        if(lastInc==-1) {   //Check if array is DSC
            for(i=0;i<n/2;++i)
                swap(nums[i],nums[n-i-1]);
            return;
        }
        //Find element in the range (nums[lastInc-1] to nums[lastInc]) to the right
        int mn = nums[lastInc];
        int index = lastInc;
        for(i=lastInc;i<n;++i) {
            if(nums[i]>nums[lastInc-1] and nums[i]<nums[index]) {
                index = i;
            }
        }
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
    }
};