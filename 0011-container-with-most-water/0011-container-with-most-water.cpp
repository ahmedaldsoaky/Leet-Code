class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = -1, n = height.size();
        // (r-l) * min(h1, h2);
        int l = 0, r = n-1;
        while(l < r)
        {
            int sum = min(height[l] , height[r]) * (r - l);
            mx = max(mx, sum);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return mx;
        // for(int i = 0; i < n; i++)
        // {
        //     int l = i;//, r= n-1;
        //     for(int r = n-1; r > l; r--)
        //     {
        //         int sum = min(height[l] , height[r]) * (r - l);
        //         mx = max(mx, sum);
        //     }
        // }
        // return mx;
    }
};