class Solution {
public:
    int countAsterisks(string s) {
        bool isActive=false;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*' && isActive==false) count++;
            if(s[i]=='|' ) isActive=!isActive;
        }
        return count;
    }
};