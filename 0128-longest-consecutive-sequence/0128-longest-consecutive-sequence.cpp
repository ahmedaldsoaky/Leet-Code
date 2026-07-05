class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mx = 0, n = nums.size(), c = 1;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i = 1; i < n; i++)
        {
            if(nums[i] - 1 == nums[i-1])
                c++;
            else
                mx = max(mx, c), c = 1;
        }
        if(n)
            mx = max(mx, c);
        return mx;
    }
};