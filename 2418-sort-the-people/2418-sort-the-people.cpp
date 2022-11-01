class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end(), greater<int>());
        vector<string>res;
        for(int i=0;i<heights.size();i++){
            res.push_back(mp[heights[i]]);
        }
        return res;
        
    }
};