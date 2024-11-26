class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> res;
        int size = grid.size();
        for (int i = 0; i < size-2; i++)
        {
            vector<int> row;
            for (int j = 0; j < size-2; j++)
            {
                int first_row = max({grid[i][j], grid[i][j+1], grid[i][j+2]});
                int second_row = max({grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2]});
                int third_row = max({grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2]});
                int maximum = max({first_row, second_row, third_row});
                row.push_back(maximum);
            }
            res.push_back(row);
        }
        return res;
    }
};