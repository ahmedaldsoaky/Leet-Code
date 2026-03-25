/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string snum1 = to_string(l1->val);
        while(l1->next)
        {
            l1 = l1->next;
            snum1.push_back(l1->val + '0');
        }
        reverse(snum1.begin(), snum1.end());
        string snum2 = to_string(l2->val);
        while(l2->next)
        {
            l2 = l2->next;
            snum2.push_back(l2->val + '0');
        }
        reverse(snum2.begin(), snum2.end());
        string sum = add(snum1, snum2);
        ListNode* res = new ListNode(sum[0]-'0');
        ListNode* temp = res;
        for(int i = 1; i < sum.size(); i++)
        {
            cout<<sum[i];
            int num = sum[i]-'0';
            ListNode* cur = new ListNode(num);
            temp->next = cur;
            temp = temp->next;
        }
        return res;
    }
string add(string s1, string s2)
{
    int n = s1.size() - 1, m = s2.size() - 1;
    string res = "";
    int rem = 0;
    while(n >= 0 && m >= 0)
    {
        int sum = rem + s1[n] + s2[m] - 2*'0';
        rem = 0;
        res.push_back((sum%10)+'0');
        if(sum > 9)
            rem = sum/10;
        n--, m--;
    }
    // cout<<res<<en<<rem<<en;
    while(n >= 0)
    {
        if(rem > 0)
            s1[n]+=rem, rem = 0;
        if(s1[n] - '0' > 9)
        {
            res.push_back((s1[n] - '0') % 10 + '0');
            rem = (s1[n] - '0') / 10;
        }
        else
            res.push_back(s1[n]);
        n--;
    }
    while(m >= 0)
    {
        if(rem > 0)
            s2[m]+=rem, rem = 0;
        if(s2[m] - '0' > 9)
        {
            res.push_back((s2[m] - '0') % 10 + '0');
            rem = (s2[m] - '0') / 10;
        }
        else
            res.push_back(s2[m]);
        m--;
    }
    if(rem > 0)
        res.push_back(rem+'0');
    // reverse(res.begin(), res.end());
    return res;
}
};