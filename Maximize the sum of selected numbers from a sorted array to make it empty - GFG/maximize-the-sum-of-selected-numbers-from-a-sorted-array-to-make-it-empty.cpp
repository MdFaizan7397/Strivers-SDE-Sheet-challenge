//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends


class Solution
{
public:
    int maximizeSum(int a[], int n)
    {
        unordered_map<int, int> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (m[a[i]] > 0)
            {
                sum += a[i];
                m[a[i]]--;
                if (m[a[i] - 1] > 0)
                    m[a[i] - 1]--;
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends