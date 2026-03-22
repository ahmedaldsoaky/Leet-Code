class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        try2(mat, target, n);
        try3(mat, target, n);
        try4(mat, target, n);
        if(try1(mat, target, n))// same
            return true;
        if(try2(mat, target, n))// 90
            return true;
        if(try3(mat, target, n))// 180
            return true;
        if(try4(mat, target, n))// 270
            return true;
        return false;
    }

    bool try1(vector<vector<int>>& mat, vector<vector<int>>& target, int n)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(mat[i][j] != target[i][j])
                    return false;
        return true;
    }

    bool try2(vector<vector<int>>& mat, vector<vector<int>>& target, int n)
    {
        for(int i = 0, l = 0; i < n; i++, l++)// column
        {
            for(int j = n-1, m = 0; j >= 0; j--, m++)// row
            {
                cout<<mat[j][i]<<' ';
                if(mat[j][i] != target[l][m])
                    return false;
            }
            cout<<endl;
        }
        cout<<"\n -------------- 1 ---------------- \n\n";
        return true;
    }

    bool try3(vector<vector<int>>& mat, vector<vector<int>>& target, int n)// 180
    {
        for(int i = n-1, l = 0; i >= 0; i--, l++)// row
        {
            for(int j = n-1, m = 0; j >= 0; j--, m++)// column
            {
                cout<<mat[i][j]<<' ';
                if(mat[i][j] != target[l][m])
                    return false;
            }
            cout<<endl;
        }
        cout<<"\n -------------- 2 ---------------- \n\n";
        return true;
    }

    bool try4(vector<vector<int>>& mat, vector<vector<int>>& target, int n)
    {
        for(int i = n-1, l = 0; i >= 0; l++, i--)// column
        {
            for(int j = 0, m = 0; j < n; j++, m++)// row
            {
                cout<<mat[j][i]<<' ';
                if(mat[j][i] != target[l][m])
                    return false;
            }
            cout<<endl;
        }
        cout<<"\n -------------- 3 ---------------- \n\n";
        return true;
    }

    
};