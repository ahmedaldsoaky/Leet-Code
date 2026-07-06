class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> ans;
        unordered_map<int, int> mp;
        for(auto& i : nums)mp[i]++;        
        for(auto& [i, j] : mp) ans.push_back({j, i});
        sort(ans.rbegin(), ans.rend());
        vector<int> ok; 
        for(int i = 0; i < k; i++) ok.push_back(ans[i].second);
        return ok;
    }
};