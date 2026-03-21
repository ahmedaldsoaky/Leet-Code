class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n = grid.size(), m = grid[0].size(), r = x+k-1;
        for(int i = x; i < x+k/2; i++)
        {
            for(int j = y; j < k+y; j++)
                swap(grid[i][j], grid[r][j]);
            r--;
        }
        return grid;
    }
};