class Solution {
    vector<vector<int>> grid;
    vector<vector<bool>> vis;
    int n, m, cnt, ans;

    int dx[8] = { +0, +0, -1, +1, +1, +1, -1, -1 };
    int dy[8] = { -1, +1, +0, +0, +1, -1, +1, -1 };

    bool valid(int x, int y){
    return x<n && x>=0 && y<m && y>=0 && !vis[x][y] && grid[x][y] == 1;
    }

    void dfs(int x, int y){
        vis[x][y] = true;
        cnt++;
        for(int i=0; i<4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(valid(nx, ny)) dfs(nx, ny);
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        n = g.size();
        if (n == 0) return 0;
        m = g[0].size();

        grid = g;
        vis = vector<vector<bool>>(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(valid(i, j)) {
                    dfs(i, j);
                    ans = max(ans, cnt);
                    cnt = 0;
                }
            }
            
        }
        return ans;
    }
};