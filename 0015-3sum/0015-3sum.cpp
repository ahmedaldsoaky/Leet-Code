class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        set<vector<int>> st;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
        {
            int t = arr[i];
            int l = i+1, r = n-1;
            while(l < r)
            {
                int sum = arr[l] + arr[r];
                if(sum == -t)
                {
                    vector<int> a = {arr[l], arr[r], t};
                    // sort(a.begin(), a.end());
                    st.insert(a);
                    l++, r--;
                }
                else if(sum < -t)
                    l++;
                else
                    r--;
            }
        }
        for(auto a : st) ans.push_back(a);
        return ans;
    }
};