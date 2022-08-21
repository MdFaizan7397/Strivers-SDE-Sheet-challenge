class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        long long int n = nums.size();
        long long int i;
        vector<int>s;
        for(i=0;i<n;i++){
                long long int a = nums[i];
                s.push_back(a);  //Pushing the elements one by one in the vector s
        }
        sort(s.begin(), s.end(), greater <>());
        return s[k-1];   //k-1 is the index of the kth smallest number
    }
};
