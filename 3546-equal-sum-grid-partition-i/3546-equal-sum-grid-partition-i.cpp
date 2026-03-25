class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();

        vector<long long> row(n, 0), col(m, 0);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                row[i] += arr[i][j];
                col[j] += arr[i][j];
                total += arr[i][j];
            }
        }

        long long cur = 0;

        // horizontal cuts
        for (int i = 0; i < n - 1; i++) {
            cur += row[i];
            if (cur == total - cur)
                return true;
        }

        cur = 0;

        // vertical cuts
        for (int j = 0; j < m - 1; j++) {
            cur += col[j];
            if (cur == total - cur)
                return true;
        }

        return false;
    }
};