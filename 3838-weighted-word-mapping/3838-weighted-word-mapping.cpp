class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        int freq[26] = {};
        for(int i = 0; i < 26; i++)
            freq[i] = weights[i];
        for(int i = 0; i < words.size(); i++)
        {
            int sum = 0;
            for(int j = 0; j < words[i].size(); j++)
                sum += weights[words[i][j] - 'a'];
            cout<<sum<<' ';
            sum%=26;
            cout<<sum<<endl;
            res+=('z' - sum);
        }
        return res;
    }
};