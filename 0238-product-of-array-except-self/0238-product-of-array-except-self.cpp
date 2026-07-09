class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c0 = count(nums.begin(), nums.end(), 0);
        if(c0 > 1)
        {
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        else if(c0 == 1)
        {
            int p = 1, idx = 0;
            vector<int> ans(nums.size(), 0);
            for(int i = 0; i < nums.size(); i++)
                if(nums[i])
                    p*=nums[i];
                else
                    idx = i;                    
            cout<<p;
            ans[idx] = p;
            return ans;
        }
        int p = 1;
        for(int& i : nums)p*=i;
        vector<int> ans;
        for(int& i : nums)ans.push_back(p/i);
        return ans;
    }
};