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
/*class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size()/2;
        map < int, int > mp;
        for(int i=0; i< arr.size() ; i++){
            mp[arr[i]]++;
        }
        for(int i=0; i < arr.size() ; i++){
            if(mp[arr[i]] > n)
                return arr[i];
        }
        return 0;
    }
};*/

//MOORES VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0) {
            candidate=nums[i]; count++;
            }
            else if(nums[i]==candidate) {
                count+=1;
            }
            else count-=1;
        }
        return candidate;
    }
};