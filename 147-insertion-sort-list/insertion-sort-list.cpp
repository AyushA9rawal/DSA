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
    ListNode* insertionSortList(ListNode* head) {
        for(ListNode *p=head;p!=NULL;p=p->next)
        {
            for(ListNode *q=head;q!=p;q=q->next)
            {
                if(q->val > p->val)
                {
                    swap(q->val,p->val);
                }
            }
        }
        return head;
    }
};