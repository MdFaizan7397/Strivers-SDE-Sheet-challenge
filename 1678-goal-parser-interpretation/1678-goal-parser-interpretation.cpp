class Solution {
public:
    string interpret(string command) {
        string result;
        int n=command.length();
        for(int i=0;i<n;i++){
            
            if(command[i]=='G') {
                result=result+"G";
            }
            
            else if(command[i]=='(' && command[i+1]==')' ) {
                result=result+'o';
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                result=result+"al";
            }
        }
        return result;
        
    }
};