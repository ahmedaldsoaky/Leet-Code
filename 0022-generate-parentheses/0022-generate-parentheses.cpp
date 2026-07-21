class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen(0, 0, n, "", ans);
        return ans;
    }
    void gen(int o, int c, int n, string s, vector<string>& ans)
    {
        if(o > n || c > o) return;

        if(o == c && s.size() == 2 * n)
        {
            ans.push_back(s);
            return;
        }
        if(o < n)
            gen(o+1, c, n, s+'(', ans);
        if(c < o)
            gen(o, c+1, n, s+')', ans);
    }
};