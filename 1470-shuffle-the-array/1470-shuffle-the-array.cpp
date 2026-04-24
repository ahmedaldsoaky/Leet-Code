class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l = 0, r = n;
        n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i ++)
            if(i & 1)
                ans.push_back(nums[r++]);
            else
                ans.push_back(nums[l++]);
        return ans;
    }
};