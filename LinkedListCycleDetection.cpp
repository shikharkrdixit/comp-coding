/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode* ptr1=head;
        ListNode* ptr2=head->next;
        while(ptr1 and ptr2){
            if(!(ptr1->next and ptr2->next))return false;
            if(ptr1==ptr2)return true;
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return false;
    }
};