
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2)
               s[i]+=(s[i-1]-'0');
        return s;
    }
};

//discussion link : https://leetcode.com/problems/replace-all-digits-with-characters/discuss/1800094/C%2B%2B-Easy-solution-with-proper-explanation