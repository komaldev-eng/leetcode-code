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
       curr = head;
       while(k>0){
          curr = head;
          while(curr->next->next!=nullptr){
            curr = curr->next;
          }
          ListNode* last = curr->next;
          curr->next = nullptr;
          last->next = head;
          head = last;
          k--;
       }
       return head;
    }
};