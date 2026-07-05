class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())return 0;

        int mx = 1, n = nums.size(), c = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < n; i++)
        {
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - 1 == nums[i-1])
                c++;
            else
                c = 1;
            mx = max(mx, c);
        }
        return mx;
    }
};