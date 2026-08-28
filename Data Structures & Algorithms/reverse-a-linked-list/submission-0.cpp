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
    ListNode* reverseList(ListNode* head) {
        
        if(!head||head->next==nullptr)return head;
        ListNode *p = head;
        ListNode *r=nullptr,*q=nullptr;
        

        while(p&&p->next){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            
        }
        p->next=q;
        head=p;

        return head;

        
    }
};
