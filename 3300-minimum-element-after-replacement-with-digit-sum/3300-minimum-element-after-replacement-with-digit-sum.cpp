class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn = INT_MAX, n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            while(nums[i])
            {
                sum += nums[i] % 10;
                nums[i]/=10;
            }
            mn = min(mn, sum);
        }
        return mn;
    }
};