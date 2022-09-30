class Solution {
public:
    int balancedStringSplit(string s) {
        int lcount=0;
        int rcount=0;
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                rcount++;
            }
            else {
                lcount++;
            }
            if(lcount==rcount){
                count++;
            }
            
        }
        return count;
        
        
    }
};