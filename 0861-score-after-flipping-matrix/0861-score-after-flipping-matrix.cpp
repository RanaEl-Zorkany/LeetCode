class Solution {
public:
int checkRow(const vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result = result * 2 + num;
    }
    return result;
}

int matrixScore(vector<vector<int>>& grid) {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int outer, inner;
    outer = grid.size();
    inner = grid[0].size();
    // HORIZONTAL
    for (int i = 0; i < outer; i++)
    {
        if(grid[i][0] == 0){
            for (int j = 0; j < inner; j++)
            {
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
        
    }
    // VERTICAL
    for (int j = 0; j < inner; j++)
    {
        int one = 0, zero = 0;
        for (int i = 0; i < outer; i++)
        {
            if(grid[i][j] == 0)
                zero++;
            else 
                one++;
        }
        if(zero>one){
            for (int i = 0; i < outer; i++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }

    int Score = 0;
    for (const auto& row : grid) {
        Score += checkRow(row);
    }
    return Score; 
    }
};