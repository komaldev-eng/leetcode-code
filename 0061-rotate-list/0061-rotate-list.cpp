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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
       ListNode* curr = head;
       int len = 0;
       while(curr!=nullptr){
        len++;
        curr = curr->next;
       } 

        k = k%len;
        if(k==0){
            return head;
        }
       int n = len - k-1;
       curr = head;
       while(n>0){
         curr = curr->next;
         n--;
       }
       ListNode* tail = curr->next;
       curr->next = nullptr;
       ListNode* temp = tail;
       while(temp->next!=nullptr){
        temp = temp->next;
       }
       temp->next = head;
     return tail;
    }
};