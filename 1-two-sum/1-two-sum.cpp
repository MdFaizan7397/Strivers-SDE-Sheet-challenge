class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){ //funding wheather given element                                                       //exist in hash table or not   
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else {
                // if the element is not found in map
                mpp[nums[i]]=i; //then simply put current element value and its index in the map
            }
        }
        return ans;
        
    }
};