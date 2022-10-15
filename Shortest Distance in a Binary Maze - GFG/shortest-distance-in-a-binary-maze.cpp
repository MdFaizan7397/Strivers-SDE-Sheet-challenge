//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool safe(int x, int y, int n, int m){
        bool ok=(x<0 || y<0 || x>=n || y>=m);
        return !ok;
}
int shortestPath(vector<vector<int>> &v, pair<int, int> source,
                     pair<int, int> destination) {
  // code here
  int dx[]={1,-1,0,0};
  int dy[]={0,0,-1,1};
  int n=v.size();
  int m=v[0].size();
  vector<vector<bool>> vis(n,vector<bool>(m,false));
  queue<pair<int, pair<int, int>>> q;
  q.push({0,{source.first, source.second}});
  while(!q.empty()){
    pair<int, pair<int, int>> p=q.front();
    q.pop();
    vis[p.second.first][p.second.second]=true;
    if(destination.first==p.second.first && destination.second==p.second.second){
      return p.first;
    }
    p.first++;
    for(int i=0;i<4;i++){
      int x=dx[i]+p.second.first;
      int y=dy[i]+p.second.second;
      if(safe(x,y,n,m) && !vis[x][y] && v[x][y]){
        q.push({p.first,{x,y}});
        vis[x][y]=true;
      }
    }
  }
  return -1;
}
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends