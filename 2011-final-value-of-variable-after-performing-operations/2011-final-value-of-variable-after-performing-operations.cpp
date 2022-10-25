class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int result=0;
        for(int i=0;i<n;i++){
            if(operations[i]=="--X"){
                result=result-1;
            }
        
        else if(operations[i]=="X--"){
                result=result-1;
            }
        else if(operations[i]=="++X"){
                result=result+1;
            }
        else if(operations[i]=="X++"){
                result=result+1;
            
        }
    }
        return result;
    }
};