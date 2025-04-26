#define fr(n) for(ll i = 0 ; i < n ; i++)
#define frj(n) for(ll j = 0 ; j < n ; j++)
#define ll long long

class Solution {
public:
    int dx[8] = { +0, +0, -1, +1, +1, +1, -1, -1 };
    int dy[8] = { -1, +1, +0, +0, +1, -1, +1, -1 };
    vector<vector<bool>> visited;
    bool valid(vector<vector<int>>& grid, int n, int m, int x, int y){
        return (x<n) && (y<m) && (x>=0) && (y>=0) && (!visited[x][y]) && (grid[x][y] == 1);
    }
    int dfs(vector<vector<int>>& grid, int x, int y){
        visited[x][y] = true;
        int cnt = 0;
        if(grid[x][y] == 1){
            for(int i=0; i<4; i++){
                int new_x = x+dx[i];
                int new_y = y+dy[i];
                if(new_x < 0 || new_x >= grid.size() || new_y < 0 || new_y >= grid[0].size()) cnt++; 
                else if (grid[new_x][new_y] == 0) cnt++;
            }
        }
        for(int i=0; i<4; i++){
            if(valid(grid, grid.size(), grid[0].size(),x+dx[i], y+dy[i])){
                cnt += dfs(grid, x+dx[i], y+dy[i]);
            }
        }
        return cnt;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        visited = vector<vector<bool>> (grid.size(), vector<bool> (grid[0].size()));
        int ans;
        fr(grid.size()){
            frj(grid[0].size()){
                if(grid[i][j] == 1 && !visited[i][j]) 
                    ans = dfs(grid, i, j);
            }
        }
        return ans;
    }
};

// dcd