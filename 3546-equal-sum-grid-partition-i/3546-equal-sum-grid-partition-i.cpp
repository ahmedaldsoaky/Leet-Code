class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();
        vector<vector<long long>> prefix(n, vector<long long>(m, 0));
        for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            prefix[i][j] = arr[i][j];
            if (i > 0)
                prefix[i][j] += prefix[i - 1][j];
            if (j > 0)
                prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
        
        for(int j = 0; j < m-1; j++)
        {
            long long sum = prefix[n-1][m-1] - prefix[n-1][j];
            cout<<prefix[n-1][j]<<' '<<sum<<endl;
            if(prefix[n-1][j] == sum)
                return true;
        }
        for(int i = 0; i < n-1; i++)
        {
            long long sum = prefix[n-1][m-1] - prefix[i][m-1];
            cout<<prefix[i][m-1]<<' '<<sum<<endl;
            if(prefix[i][m-1] == sum)
                return true;
        }
        return false;
    }
};