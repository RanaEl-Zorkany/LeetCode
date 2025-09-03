class Solution {
    int dx[4] = {+0,+0,-1,+1};
    int dy[4] = {-1,+1,+0,+0};
    vector<vector<bool>> visited;
    int n, m;
    bool valid(int x, int y){
        return x>=0 && x<n && y>=0 && y<m && !visited[x][y];
    }
    bool valid_edge(int x, int y){
        return (x==0 || x==n-1 || y==0 || y==m-1) && !visited[x][y];
    }
    void dfs(vector<vector<char>>& grid, int x, int y){
        visited[x][y] = true;
        for(int i=0; i<4; i++){
            int nx = x + dx[i], ny = y + dy[i];
            if(valid(nx, ny) && grid[nx][ny] == 'O') {
                dfs(grid, nx, ny);
            }
        }
    }
public:
    void solve(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        visited.assign(n, vector<bool>(m, false));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(valid_edge(i, j) && grid[i][j] == 'O') {
                    dfs(grid, i, j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j])
                    grid[i][j] = 'X';
            }
        }
    }
};