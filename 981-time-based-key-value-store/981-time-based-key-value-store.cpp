class TimeMap {
public:
    // map for storing the value
    unordered_map<int,unordered_map<string,string>>mp;
    // map for storing the key
    map<string,set<int>>mp1;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[timestamp][key]=value;
        mp1[key].insert(timestamp);
    }
    
    string get(string key, int timestamp) {
        auto it=mp1[key].upper_bound(timestamp);
        //cout<<*it<<endl;
        if(it==mp1[key].end())
        {
            if(mp1[key].empty()==true)
                return "";
            else
                return mp[*(--it)][key];
        }
        else
        {
            if(*it>timestamp)
            {
                if(it==mp1[key].begin())
                    return "";
                else
                    return mp[*(--it)][key];
            }
            else
            {
                return mp[*it][key];
            }
        } 
    }
};