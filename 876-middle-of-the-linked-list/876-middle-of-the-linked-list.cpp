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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        ListNode* middle = head;
        int length = 0;
        
        while (curr->next) {
            length++;
            
            if (length % 2 == 0) {
                middle = middle->next;
            }
            
            curr = curr->next;
        }
        
        return ((length + 1) % 2) == 1 ? middle : middle->next;
        
    }
};