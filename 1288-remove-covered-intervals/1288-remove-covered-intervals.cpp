class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        ranges::sort(arr, {}, [](auto& x) {
            return pair{x[0], -x[1]};
        });
        //  == 
        // sort(arr.begin(), arr.end(),
        // [](const auto& a, const auto& b)
        // {
        //     return pair{a[0], -a[1]} < pair{b[0], -b[1]};
        // });

        int res = 0, r = 0;
        for(auto& a : arr)
        {
            res += a[1] > r;
            r = max(r, a[1]);
        }
        return res;
    }
};