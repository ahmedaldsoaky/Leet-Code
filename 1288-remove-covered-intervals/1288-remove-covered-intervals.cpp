class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<bool> ok(n, 1);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j)continue;
                if(arr[i][0] >= arr[j][0] && arr[i][1] <= arr[j][1])
                {
                    ok[i] = 0;
                    break;
                }
            }
        }
        return count(ok.begin(), ok.end(), true);
    }
};