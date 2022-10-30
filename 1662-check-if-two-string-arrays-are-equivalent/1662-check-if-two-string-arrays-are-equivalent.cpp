class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string a;
        string b;
        for(int i=0;i<n;i++){
            a=a+word1[i];
        }
        
        for(int i=0;i<m;i++){
            b=b+word2[i];
        }
        if(a!=b) return false;
        else return true;
        
    }
};