class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        int freqe[26] = {}, freqo[26] = {};
        for(int i = 0; i < n; i++)
            if(i & 1)
                freqo[s1[i] - 'a']++, freqo[s2[i] - 'a']--;
            else
                freqe[s1[i] - 'a']++, freqe[s2[i] - 'a']--;
        for(int i = 0; i < n; i++)
            if(freqo[s1[i] - 'a'] || freqe[s1[i] - 'a'])
                return false;
        return true;
    }
};