/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 Soln1:
  ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL) return head;
        
        ListNode* secLast = NULL;
        ListNode* last = head;
        int count=0;
        
        while(count<k){
            while(last->next != NULL){
            secLast = last;
            last = last->next;
        }
            secLast = NULL;
            last->next = head;
            head = last;
            count++;
        }
        
         return head;       
        
    }
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k){
        if(head==NULL || head->next==NULL || k==0) return head;
        int count=1;
        ListNode* temp = head;
        while(temp->next && count++) temp = temp->next;
        temp->next=head;
        
        k=k%count;
        k = count - k;
        while(k--) temp = temp->next;
        
        head = temp->next;
        temp->next = NULL;
        return head;
    }
   
};