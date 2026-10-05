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
    void reorderList(ListNode* head) {

        // if(head == nullptr || head->next==nullptr){
        //     return;
        // }
        // ListNode* slow = head;
        // ListNode* fast = head;
        // while(fast->next!=nullptr && fast->next->next!=nullptr){
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        // ListNode* second = slow->next;
        // slow->next = nullptr;

        // ListNode* prev = nullptr;

        // while(second!=nullptr){
        //     ListNode* nextNode = second->next;
        //     second->next = prev;
        //     prev = second;
        //      second = nextNode ;
        // }


        // second = prev;

        // ListNode* first = head;

        // while(second!=nullptr){
        //   ListNode* firstNext = first->next;
        //     ListNode* secondNext = second->next;
        //   first->next = second;
        //   second->next = firstNext;
        //   first = firstNext;
        //   second = secondNext;
        // }


        ListNode* curr = head;
        vector<int>ans;
        while(curr!=nullptr){
            ans.push_back(curr->val);
            curr = curr->next;
        }
        curr = head;
        int i = 0;
        int j = ans.size()-1;
        while(curr!=nullptr){
         curr->val = ans[i];
         i++;
         curr = curr->next;
         if(curr== nullptr){
            break;
         }
         curr->val = ans[j];
         j--;
         curr = curr->next;

        }
        
    }
};