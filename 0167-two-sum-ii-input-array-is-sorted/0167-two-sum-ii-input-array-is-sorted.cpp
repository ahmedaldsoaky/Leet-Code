class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int l = 0, r = arr.size() - 1;
        while(l < r)
        {
            int sum = arr[l] + arr[r];
            if(sum < target)
                l++;
            else if(sum > target)
                r--;
            else
                return {l+1, r+1};
        }
        return {l, r};
    }
};