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
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        if(head==NULL)return head;
        
        
        ListNode* prev = head ;
        ListNode* start= prev;
        ListNode* present=head->next;
        while(present!=NULL){
            if(present->val==val){
                if(present->next==NULL)prev->next=NULL;
                present=present->next;
            }
            else{
                prev ->next = present ;
                prev = prev->next;
                present=present->next;
            }
        }
        
        return start;
    }
};