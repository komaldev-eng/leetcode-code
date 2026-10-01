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
        ListNode* temp = curr->next;
      ListNode* next = head;
      
        while(n!=0){
            next = next->next;
            n--;
        }
        if(next == nullptr)
        return temp;

       while(next->next!=nullptr){
        next = next->next;
        temp = temp->next;
        curr = curr->next;
       }
       curr->next = temp->next;
       
      
 return head;
    }

};