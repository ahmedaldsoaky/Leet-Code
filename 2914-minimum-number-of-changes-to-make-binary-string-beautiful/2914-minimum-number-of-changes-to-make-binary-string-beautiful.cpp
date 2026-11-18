class Solution {
public:
    int minChanges(string s) {
        int c = 0;
        for(int i = 0; i < s.size(); i+=2)// s has an even lenght
            if(s[i] != s[i+1]) c ++;
        return c;
    }
};