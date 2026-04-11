class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for(int i = 0; i < n; i++)
        {
            arr[i].first = nums[i];
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());
        int l = 0, r = n-1;
        while(l < r)
        {
            int sum = arr[l].first + arr[r].first;
            if(sum == target)
                return {arr[l].second, arr[r].second};
            else if(sum < target)
                l++;
            else
                r--;
        }
        return {-1, -1};
    }
};