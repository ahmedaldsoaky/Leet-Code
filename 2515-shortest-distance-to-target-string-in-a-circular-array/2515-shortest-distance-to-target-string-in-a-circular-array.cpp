class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mn = INT_MAX, n = words.size();
        for(int i = 0; i < n; i++)
        {
            if(words[i] == target)
            {
                int dif = abs(i - startIndex);
                mn = min(mn, min(dif, abs(n - dif)));
            }
        }
        return mn == INT_MAX ? -1 : mn;
    }
};