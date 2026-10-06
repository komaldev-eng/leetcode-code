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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode dummy(0);
        ListNode* curr = &dummy;
        int val = 0;
        int carry = 0;
        while(list1!=nullptr && list2!=nullptr){

            val = list1->val+list2->val+carry;
            int lastDigit = val%10;
            carry = val/10;
            curr->next = new ListNode(lastDigit);
            curr = curr->next;
            list1 = list1->next;
            list2 = list2->next;

        }
         while(list1!=nullptr){

            val = list1->val+carry;
            int lastDigit = val%10;
            carry = val/10;
            curr->next = new ListNode(lastDigit);
            curr = curr->next;
            list1 = list1->next;

        }
         while( list2!=nullptr){

            val = list2->val+carry;
            int lastDigit = val%10;
            carry = val/10;
             curr->next = new ListNode(lastDigit);
            curr = curr->next;
            list2 = list2->next;

        }
        if(carry!=0){
            curr->next = new ListNode(carry);
        }
        return dummy.next;
    }
};