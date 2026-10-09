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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        vector<int>ans;
        while(curr!=nullptr){
            ListNode* temp = curr->next;
            int larger = 0;
            while(temp!=nullptr){
                if(temp->val>curr->val){
                    larger = temp->val;
                    break;
                }
                temp = temp->next;
            }
            ans.push_back(larger);
            curr = curr->next;
        }
        return ans;
    }
};