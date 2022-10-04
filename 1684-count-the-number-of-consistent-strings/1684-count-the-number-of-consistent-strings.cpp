class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
    int ans = 0;
    
    for(int i=0;i<allowed.size();i++)
    {
        mp[allowed[i]]++;
    }
    int flag = true;
    for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words[i].size();j++)
        {   
        if(mp.find(words[i][j])==mp.end()){
            flag = false;
            break;
        }
            
                
                
        }
        if(flag==true)
            ans++;
        flag=true;
        
    }
    return ans;
    }
};