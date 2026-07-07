class Solution {
public:
    bool isPalindrome(string s) {
        string m = "";
        for(char& c : s)
            if(isalnum(c))
                m += tolower(c);
        cout<<m<<endl;
        for(int i = 0; i < m.size()/2; i++)
            if(m[i] != m[m.size()-1-i]) return false;
        return true;
    }
};