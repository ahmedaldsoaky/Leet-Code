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
    int pairSum(ListNode* head) {
        ListNode* cur = head;
        int n = 1;
        ListNode* rev = reverse(cur, n);
        int mx = 0;
        for(int i = 0; i < n/2; i++)
        {
            int sum = cur->val + rev->val;
            cout<<cur->val<<' '<<rev->val<<endl;
            mx = max(mx, sum);
            cur = cur->next;
            rev = rev->next;
        }
        return mx;
    }
    ListNode* reverse(ListNode* head, int& n)
    {
        ListNode* cur = head;
        ListNode* prev = head->next;
        while(prev)
        {
            n++;
            ListNode* temp = new ListNode(prev->val);
            temp->next = cur;
            cur = temp;
            prev = prev->next;
        }
        return cur;
    }
};