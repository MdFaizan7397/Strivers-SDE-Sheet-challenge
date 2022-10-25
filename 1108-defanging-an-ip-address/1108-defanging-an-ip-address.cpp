class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string result;
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                result=result+"[.]";
            }
            else{
                result=result+address[i];
            }
        }
        return result;
    }
};