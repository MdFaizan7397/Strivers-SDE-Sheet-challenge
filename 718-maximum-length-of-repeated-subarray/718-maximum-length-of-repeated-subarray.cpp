class Solution {
public:
    int LCSubstringNikalo(vector<int>& s, vector<int>& t)
    {
        int sl=s.size();
        int tl=t.size();
        vector<vector<int>> koiMilGaya(sl+1,vector<int>(tl+1,0));
        int sabseLambi=0;
        for(int i=1;i<=sl;i++)
        {
            for(int j=1;j<=tl;j++)
            {
                if(s[i-1]==t[j-1])
                    koiMilGaya[i][j]=koiMilGaya[i-1][j-1]+1;
                sabseLambi=max(sabseLambi,koiMilGaya[i][j]);
            }
        }
        return sabseLambi;
    }
    int findLength(vector<int>& a, vector<int>& b) {
        return LCSubstringNikalo(a,b);
    }
};