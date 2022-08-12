class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans(n+m);
        //int k=ans.size();
    int a = 0;
    for(int i = 0 ;i<n;i++)
    {
        ans[i] = nums1[i];
    }
    
    for(int i =n ;i<ans.size();i++)
    {
        ans[i] = nums2[a];
        a++;
    }
    sort(ans.begin(),ans.end());
    int mid = ans.size()/2;
    if(ans.size()%2==1) return ans[mid];
    else return (ans[mid] + ans[mid-1])/2.00000;
}
    
};