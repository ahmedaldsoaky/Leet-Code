class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return check1(board) && check3(board);
    }

    bool check1(vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); i++)
        {
            int freq1[10] = {}, freq[10] = {};
            for(int j = 0; j < board[i].size(); j++)
            {
                char c1 = board[i][j];
                if(c1 != '.'){
                    // cout<<c<<' ';
                    freq1[c1 - '0']++;
                    if(freq1[c1 - '0'] > 1) return false;
                }

                char c = board[j][i];
                if(c == '.') continue;
                cout<<c<<' ';
                freq[c - '0']++;
                if(freq[c - '0'] > 1) return false;
            }
        }
        return true;
    }
    bool check3(vector<vector<char>>& board)
    {
        for(int k = 0; k < 3; k++)
        {
            for(int l = 0; l < 3; l++)
            {
                int freq[10] = {};
                for(int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 3; j++)
                    {
                        char c = board[i+k*3][j+l*3];
                        if(c == '.')continue;
                        // cout<<c<<' ';
                        
                        freq[c - '0']++;
                        if(freq[c - '0'] > 1) return false;
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
            cout<<endl;
        }
        return true;
    }

};