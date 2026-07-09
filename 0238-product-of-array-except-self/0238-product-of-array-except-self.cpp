class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, pref(n+1, 1), suff(n+2, 1);
        for(int i = 0; i < n; i++)
            pref[i+1] = pref[i] * nums[i];
        for(int i = n-1; i >= 0; i--)
            suff[i+1] = suff[i+2] * nums[i];
        for(int i = 0; i < n; i++)
            if(!i) ans.push_back(suff[i+2]);
            else if(i == n-1) ans.push_back(pref[i]);
            else ans.push_back(pref[i] * suff[i+2]);
        return ans;
    }
};