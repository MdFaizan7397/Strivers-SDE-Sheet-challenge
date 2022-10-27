class Solution {
public:
    string decodeMessage(string key, string message) {
           map<char, char> m;
           char c = 'a';
        
           for(char ch : key) {
               if(ch == ' ') continue;
               if(m.find(ch) == m.end()) {
                   m[ch] = c;
                   c++;
               }
           }
        
          string ans;
          for(char ch : message) {
              if(ch == ' ') {ans += ch; continue;}
              ans += m[ch];
          }
        
        return ans;
    }
};