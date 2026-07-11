class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int lm = 0, rm = 0, sum = 0;
        while(l < r)
        {
            lm = max(lm, height[l]);
            rm = max(rm, height[r]);

            if(lm < rm)
            {
                sum += lm - height[l++];
            }
            else
            {
                sum += rm - height[r--];
            }
        }
        return sum;
    }
};