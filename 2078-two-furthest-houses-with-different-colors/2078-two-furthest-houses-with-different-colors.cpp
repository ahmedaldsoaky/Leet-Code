class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n1 = 0, n2 = 0;
        for(int i = colors.size() - 1; i >= 0; i--)
            if(colors[i] != colors[0])
            {
                n1 = i;
                break;
            }
        for(int i = 0; i < colors.size(); i++)
            if(colors[i] != colors[colors.size() - 1])
            {
                n2 = colors.size() - i - 1;
                break;
            }
        return max(n1, n2);
    }
};