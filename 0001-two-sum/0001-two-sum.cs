public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int n = nums.Length;
        KeyValuePair<int, int>[] arr = new KeyValuePair<int, int>[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = new KeyValuePair<int, int>(nums[i], i);
        }
        var sortedKeys = arr.OrderBy(x => x.Key)
                        .ThenBy(x => x.Value).ToArray();
        // for(int i = 0; i < n; i++)
        //     arr[i] = new KeyValuePair<int, int>(sortedKeys[i], arr[i].Value);
        int l = 0, r = n-1;
        int[] ans = new int[2];
        while(l < r)
        {
            int sum = sortedKeys[l].Key + sortedKeys[r].Key;
            if(sum == target)
            {
                ans[0] = sortedKeys[l].Value;
                ans[1] = sortedKeys[r].Value;
                return ans;
            }
            else if(sum < target)
                l++;
            else
                r--;
        }
        return ans;
    }
    /*
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
    */
}