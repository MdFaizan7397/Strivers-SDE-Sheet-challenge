class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        int count=0;
        for(int i=0;i<n;i++){
                if(s[i]=='R'){
                    r++;
                }
                else if(s[i]=='L'){
                    l++;
                }
                if(l==r){
                count++;
            }
            
            
        }
        return count;
    }
};