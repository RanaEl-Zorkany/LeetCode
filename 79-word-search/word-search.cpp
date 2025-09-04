class Solution {
    int dx[4] = {0,0,-1,1};
    int dy[4] = {-1,1,0,0};
    int n, m;
    string source, target;
    vector<vector<char>> grid;
    vector<vector<bool>> vis;

    bool valid(int x, int y, int cnt){
        return x>=0 && x<n && y>=0 && y<m && !vis[x][y] && cnt < source.size() && grid[x][y] == source[cnt];
    }
    bool dfs(int x, int y, int cnt){
        if (cnt == source.size() - 1) return true; 
        vis[x][y] = true;
        for(int i=0; i<4; ++i){
            int nx = x + dx[i], ny = y + dy[i];
            if(valid(nx, ny, cnt+1)) {
                if (dfs(nx, ny, cnt + 1)) return true;
            }
        }
        vis[x][y] = false;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        source = word;
        grid = board;
        vis.assign(n, vector<bool>(m, false));

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                target.clear();
                if(valid(i, j, 0) && grid[i][j] == source[0]) {
                    if (dfs(i, j, 0)) return true;
                }
            }
        }
        return false;
    }
};