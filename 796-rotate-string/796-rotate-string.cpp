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
            temp=s+s;
            if(temp.find(goal)!=string ::npos){
                return true;
            }
            
        }
        return false;
                
        

    }
};