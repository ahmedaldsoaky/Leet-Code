class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size() <= k) return s;
        string res = fun(s, k);
        while(res.size() > k)
            res = fun(res, k);
        return res;
    }
    string fun(string s, int k)
    {
        string res = "";
        int x = 0;
        for(int i = 0; i < s.size(); i+=k)
        {
            x = 0;
            for(int j = i; j < min((int)s.size(), i + k); j++)
                x += (s[j] - '0');
            res += to_string(x);
        }
        return res;
    }
};