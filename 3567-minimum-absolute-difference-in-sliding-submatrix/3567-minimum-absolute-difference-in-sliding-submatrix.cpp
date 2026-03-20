class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        vector<vector<int>> ans(n - k + 1);
        for(int i = 0; i <= n - k; i++)
        {
            int m = grid[i].size();
            vector<int> arr;
            for(int j = 0; j <= m - k; j++)
            {
                set<int> st;
                for(int l = 0; l < k; l++)
                    for(int m = 0; m < k; m++)
                        st.insert(grid[l+i][m+j]);
                int last = *st.begin();
                int mn = INT_MAX;
                st.erase(st.begin());
                for(auto i : st)
                {
                    mn = min(mn, abs(last-i));
                    last = i;
                }
                if(mn == INT_MAX)
                    mn = 0;
                ans[i].push_back(mn);
            }
        }
        return ans;
    }
};