class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = -1, n = height.size();
        // (r-l) * min(h1, h2);
        int l = 0, r = n-1;
        while(l < r)
        {
            int h = min(height[l] , height[r]);
            int w = (r - l);
            int sum = h * w;
            mx = max(mx, sum);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return mx;
    }
};