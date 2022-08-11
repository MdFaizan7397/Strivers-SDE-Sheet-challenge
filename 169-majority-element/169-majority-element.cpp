//BRUTE FORCE
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = nums.size()/2;

        for (int i=0;i<nums.size();i++) 
        {
            int count = 0;
            for (int j=0;j<nums.size();j++) {
                if (nums[j] == nums[i]) {
                    count += 1;
                }
            }
            if (count > temp) {
                return nums[i];
            }
        }

        return -1;    
    }
};*/

//UNORDERED MAP
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size()/2;
        map < int, int > freq;
        for(int i=0; i< arr.size() ; i++){
            freq [arr[i]]++;
        }
        for(int i=0; i < arr.size() ; i++){
            if(freq [arr[i]] > n)
                return arr[i];
        }
        return 0;
    }
};