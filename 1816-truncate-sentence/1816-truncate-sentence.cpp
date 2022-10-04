class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                s.erase(s.begin()+i , s.end());
            return s;
            }
            
            
        }
        return s ;
    }
};