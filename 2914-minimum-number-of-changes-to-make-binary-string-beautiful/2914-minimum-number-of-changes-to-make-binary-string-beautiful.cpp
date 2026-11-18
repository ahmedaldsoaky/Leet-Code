class Solution {
public:
    int minChanges(string s) {
        int c = 0, o = 0, z = 0;
        for(int i = 0; i < s.size(); i++)
        {
            o += s[i] == '1';
            z += s[i] == '0';
            if(i % 2 == 1) c += min(o , z), z = o = 0;
        }
        return c;
    }
};