//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    
    bool check(vector<ll> A, vector<ll> B, int N) {
        //all elements of array A is putten to Hashmap
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            mp[A[i]]++;
        }
        
        //now here we will iterate the array B , 
        //and find elements of B in the Hash map
        for(int i=0;i<N;i++){
            int key =B[i];
            if(mp.find(key)!=mp.end()){ //finding element in the hashmap
                auto itr =mp.find(key);
                if(itr->second>0){
                    itr->second--; //if element found decrement the count of key
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends