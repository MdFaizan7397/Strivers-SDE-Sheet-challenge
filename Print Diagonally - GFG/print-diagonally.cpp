//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    vector<int> downwardDigonal(int N, vector<vector<int>> A){
        map<int, vector<int>> m;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                m[i + j].push_back(A[i][j]);}}
        vector<int> vc;
        for (int i = 0; i <= N + N; i++){
            for (int x : m[i]){
                vc.push_back(x); } }
        return vc; } };

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends