class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n = grid.size(), m = grid[0].size(), z = k;
        int r = x+k-1;
        for(int i = x; i < x+k/2; i++)
        {
            for(int j = y; j < k+y; j++)
            {
                cout<<grid[i][j]<<' '<< grid[r][j]<<endl;
                swap(grid[i][j], grid[r][j]);
            }
            cout<<endl;
            r--;
        }
        return grid;
    }
};