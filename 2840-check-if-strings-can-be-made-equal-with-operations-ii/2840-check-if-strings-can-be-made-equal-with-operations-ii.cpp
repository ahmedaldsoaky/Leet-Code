class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        map<int, int> mpe, mpo;
        for(int i = 0; i < n; i++)
            if(i & 1)
                mpo[s1[i]]++;
            else
                mpe[s1[i]]++;
        for(int i = 0; i < n; i++)
        {
            if(i & 1) {
                if(mpo[s2[i]] > 0)
                    mpo[s2[i]]--;
                else
                    return false;
            }
            else {
                if(mpe[s2[i]] > 0)
                    mpe[s2[i]]--;
                else
                    return false;
            }
        }
        return true;
    }
};