class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        vector<vector<int>> ans(n - k + 1);
        for(int i = 0; i <= n - k; i++)
        {
            int m = grid[i].size();
            for(int j = 0; j <= m - k; j++)
            {
                vector<int> arr;
                for(int l = 0; l < k; l++)
                    for(int m = 0; m < k; m++)
                        arr.push_back(grid[l+i][m+j]);
                sort(arr.begin(), arr.end());
                arr.erase(unique(arr.begin(), arr.end()), arr.end());
                if(arr.size() == 1)
                {
                    ans[i].push_back(0);
                    continue;
                }
                int mn = INT_MAX;
                for(int l = 1; l < arr.size(); l++)
                    mn = min(mn, abs(arr[l]-arr[l-1]));
                ans[i].push_back(mn);
            }
        }
        return ans;
    }
};