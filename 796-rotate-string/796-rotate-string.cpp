class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        string temp;
        
        if(n!=m){
            return false;
        }
        else if(n==m){
            temp=s+s; // concatenation of string1
            if(temp.find(goal)!=string ::npos){ //finding wheather sting2 is present in str1
                return true;                    
            }
            
        }
        return false;
                
        

    }
};