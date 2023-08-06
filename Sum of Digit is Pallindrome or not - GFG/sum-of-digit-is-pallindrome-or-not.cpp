//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  //self made function to check for palindrome
  int is_palindrome(int n){
      int temp=n;
      int ans=0;
      while(temp){
          ans=ans*10 + temp%10;
          temp=temp/10;
      }
      if(ans==n){
          return 1;
      }
      else{
          return 0;
      }
  }
  
  //default function , where we calculate the digit sum
    int isDigitSumPalindrome(int N) {
        int sum=0;
        while(N){
            sum=sum+ N%10;
            N=N/10;
        }
        return is_palindrome(sum);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends