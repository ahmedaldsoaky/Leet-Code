class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return 0;
        string s = to_string(x);
        string m = s;
        reverse(m.begin(), m.end());
        return s == m;
    }
};