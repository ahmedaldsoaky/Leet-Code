class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> arr(n+1);
        for(int i = 0; i < n; i++)
            arr[nums[i]].push_back(i);
        int mn = INT_MAX;
        for(int i = 1; i <= n; i++)
        {
            if(arr[i].size() >= 3)
            {
                for(int j = 0; j <= arr[i].size() - 3; j++)
                {
                    int d = abs(arr[i][j]-arr[i][j+1]) + abs(arr[i][j+1]-arr[i][j+2])
                    + abs(arr[i][j+2]-arr[i][j]);
                    mn = min(mn, d);
                }
            }
        }
        return mn != INT_MAX ? mn : -1;
    }
};