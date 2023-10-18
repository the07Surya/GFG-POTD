class Solution
{
    int delrow[8]={-1,0,1,0,-1,1,1,-1};
    int delcol[8]={0,1,0,-1,-1,1,-1,1};
    public:
    //Function to find unit area of the largest region of 1s.
    int bfs(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int, int>>q;
        q.push({i, j});
        vis[i][j] = 1;
        int count = 0;
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            count++;
            
            for(int i= 0;i<8;i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 and nrow < m and ncol >= 0 and ncol < n and vis[nrow][ncol] == 0 and grid[nrow][ncol]==1) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return count;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int m = grid.size();
        int n = grid[0].size();
        int maxi = 0;
        vector<vector<int>>vis(m+1, vector<int>(n+1, 0));
        for(int i= 0;i<m;i++) {
            for(int j= 0;j<n;j++) {
                if(grid[i][j]== 1 and vis[i][j] == 0) {
                    maxi = max(maxi, bfs(i, j, grid, vis));
                }
            }
        }
        return maxi;
    }
};
