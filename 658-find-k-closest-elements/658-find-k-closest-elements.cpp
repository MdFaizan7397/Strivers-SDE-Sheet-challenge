class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        if(n<=k)return arr;
        int idx = binarySearch(arr, x);
        int l = idx, r=idx;
        while(r-l+1<k){
            if(l<=0)
                r++;
            else if(r>=n-1)
                l--;
            else{
                if(abs(arr[l-1]-x) <= abs(arr[r+1]-x))
                    l--;
                else
                    r++;
            }
        }
        return vector<int>(arr.begin()+l, arr.begin()+r+1);
    }
    int binarySearch(vector<int>& arr, int x){
        int l=0, r=arr.size()-1;
        while(l<r-1){
            int mid = (l+r)/2;
            if(arr[mid]==x)
                return mid;
            else if(arr[mid]<x)
                l = mid;
            else
                r = mid;
        }
        if(abs(arr[l]-x)<=abs(arr[r]-x))
            return l;
        else
            return r;
    }
};