class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};