class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int, greater<int>> pq;
        for(int i = 0; i < k; i++)
            pq.insert(nums[i]);
        vector<int> ans;
        ans.push_back(*pq.begin());
        for(int i = k; i < nums.size(); i++)
        {
            // remove
            auto it = pq.find(nums[i - k]);
            if (it != pq.end())
                pq.erase(it); 
            // push
            pq.insert(nums[i]);
            // push ans
            ans.push_back(*pq.begin());
        }
        return ans;
    }
};