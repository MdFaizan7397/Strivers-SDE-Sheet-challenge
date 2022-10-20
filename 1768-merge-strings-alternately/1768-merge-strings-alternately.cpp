class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string result="";
        int i=0;
        int j=0;
        while(i<n && j<m){
            result=result+word1[i];
            i++;
            result=result+word2[j];
            j++;
        }
        while(i<n){
            result=result+word1[i];
            i++;
        }
        while(j<m){
            result=result+word2[j];
            j++;
        }
        return result;
        
    }
};