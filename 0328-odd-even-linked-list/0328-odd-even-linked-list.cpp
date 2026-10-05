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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
      ListNode* curr1 = head;
      ListNode* curr2 = head->next;
      vector<int>ans;
      while(curr1!=nullptr){
        
        ans.push_back(curr1->val);
        if(curr1->next==nullptr){
            break;
        }
        curr1 = curr1->next->next;
      }
      while(curr2!=nullptr){
        ans.push_back(curr2->val);
         if(curr2->next==nullptr){
            break;
        }
        curr2 = curr2->next->next;
      }
      ListNode* curr = head;
       int i = 0;
      while(curr!=nullptr){
       curr->val = ans[i];
       i++;
       curr = curr->next;

      }
      return head;
    }
};