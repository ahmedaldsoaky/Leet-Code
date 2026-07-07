class Solution {
public:
    bool isPalindrome(string s) {
        string m = "";
        for(char& c : s)
            if(isalnum(c))
                m += tolower(c);
        cout<<m<<endl;
        int i = 0, j = m.size()-1;
        while(i < j)
            if(m[i] != m[j]) return false;
            else i++, j--;
        return true;
    }
};