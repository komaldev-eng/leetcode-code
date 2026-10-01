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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==nullptr && head->next==nullptr){
        //     return nullptr;
        // }
       
       
        ListNode* curr = head;
        int count = 0;
        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        ListNode dummy(0,head);
        ListNode* prev = &dummy;
        curr = head;
        while(count!=n){
            curr = curr->next;
            count--;
            prev = prev->next;
        }
        prev->next = curr->next;
       
      
 return dummy.next;
    }

};