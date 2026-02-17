class Solution {
public:
    vector<string> readBinaryWatch(int x) {
        if(x > 8)return {};
        vector<string> ans;
        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < 60; j++)
            {
                if(__builtin_popcount(i) + __builtin_popcount(j) == x)
                {
                    string s = to_string(i) + ':';
                    if(j < 10)
                        s+='0';
                    s+= to_string(j);
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};