class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        for(auto i : sentence ){
              //97-97=0
            v[i-97]=1;
            i++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0) return false;
        }
        return true;
    }
};