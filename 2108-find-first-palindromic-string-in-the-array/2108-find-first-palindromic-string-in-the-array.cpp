class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string temp;
        string res;
        for(int i=0;i<words.size();i++){
            string res=words[i];
            temp=res;
            
            reverse(temp.begin(),temp.end());
            if(temp==res){
                return res;
            }
        }
        return "";
        
        
        
    }
};