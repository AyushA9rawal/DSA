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
    
    int getDecimalValue(ListNode* head) {

        ListNode* p=head;
        int res=0;
        while(p)
        {
            res=res*2 +p->val;
            p=p->next;
        }

       
        return res;
    }
};