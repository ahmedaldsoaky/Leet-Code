class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        if(nums.size() < 4) return 0;
        return min({ch1(nums), ch2(nums), ch3(nums), ch3(nums)});
    }
    int ch1(vector<int> nums)
    {
        sort(nums.begin(), nums.end());
        for(int i : nums)cout<<i<<' ';
        nums[0] = nums[1] = nums[2];
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1]-nums[0];
    }
    int ch2(vector<int> nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        nums[n-1] = nums[n-2] = nums[n-3];
        sort(nums.begin(), nums.end());
        return nums[n-1]-nums[0];
    }
    int ch3(vector<int> nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        nums[n-1] = nums[0] = nums[n-3];
        sort(nums.begin(), nums.end());
        return nums[n-1]-nums[0];
    }
    int ch4(vector<int> nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        nums[n-1] = nums[0] = nums[2];
        sort(nums.begin(), nums.end());
        return nums[n-1]-nums[0];
    }
};