class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int count;
        int maxi=0;
        for(int i=0;i<n;i++){
            count=1;
            for(int j=0;j<sentences[i].length();j++){
                
                if(sentences[i][j]==' '){
                    count++;
                }
            
         }
            maxi=max(maxi,count);
           
        }
         return maxi;
    }
};