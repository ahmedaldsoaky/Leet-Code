class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = "";
        while(n)
        {
            s+= to_string(n&1);
            n>>=1;
        }
        for(int i = 1; i < s.size(); i++)
            if(s[i-1] == s[i])
                return false;
        return true;
    }
};