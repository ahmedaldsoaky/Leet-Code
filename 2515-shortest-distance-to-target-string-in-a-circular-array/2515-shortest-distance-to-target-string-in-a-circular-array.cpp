class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mn = min({
            f1(words, target, startIndex),
            f2(words, target, startIndex),
            f3(words, target, startIndex),
            f4(words, target, startIndex),
            });
        return mn == INT_MAX ? -1 : mn;
    }
    int f1(vector<string>& words, string target, int startIndex)
    {
        int n = words.size();
        for(int i = startIndex; i < n; i++)
            if(words[i] == target)
                return abs(i - startIndex);
        return INT_MAX;
    }
    int f2(vector<string>& words, string target, int startIndex)
    {
        int n = words.size();
        int init = n - startIndex;
        for(int i = 0; i < startIndex; i++)
            if(words[i] == target)
                return init + i;
        return INT_MAX;
    }
    int f3(vector<string>& words, string target, int startIndex)
    {
        int n = words.size();
        for(int i = startIndex; i >= 0; i--)
            if(words[i] == target)
                return abs(i - startIndex);
        return INT_MAX;
    }
    int f4(vector<string>& words, string target, int startIndex)
    {
        int n = words.size();
        int init = startIndex;
        for(int i = n; i > startIndex; i--)
            if(words[i] == target)
                return init + abs(i - n);
        return INT_MAX;
    }
};