//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    int remainder=1;
	    int dividend,divisor;
	    if(A>B){
	        dividend=A;
	        divisor=B;
	    }
	    else{
	        dividend=B;
	        divisor=A;
	    }
	    while(remainder){
	        remainder=dividend%divisor;
	        if(remainder!=0){
	            dividend=divisor;
	            divisor=remainder;
	        }
	    }
	    return divisor;
	      
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends