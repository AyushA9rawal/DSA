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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p=head;
        ListNode *dummy=new ListNode();
        ListNode *prev=dummy;
        prev->next=p;
        while(p!=NULL)
        {
            
            if(p->val==val)
            {
                prev->next=p->next;
            }
            else
            {
                prev=p;
            }
            
            p=p->next;
        }
        return dummy->next ;
    }
};

/*
eg. head=[7,7,7,7]
    val=7
    p=7, prev=0
    iteration 1 : 0->7->7->7, prev=7, p=7
    iteration 2 : 
*/