class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int ans = -1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(nums[mid] <= target)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return (ans != -1 && target != nums[ans]) ? -1 : ans;
    }
};