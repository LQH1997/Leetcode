/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int mod = 0;
    ListNode result(0), *current = &result;
    while(l1 != NULL || l2 != NULL || mod) {
        int temp1 = 0;
        if(l1 == NULL) temp1 = 0;
        else {
            temp1 = l1 -> val;
        }
        int temp2 = 0;
        if(l2 == NULL) temp2 = 0;
        else {
            temp2 = l2 -> val;
        }
        int sum = temp1 + temp2 + mod;
        mod = sum / 10;
        current -> next = new ListNode(sum % 10);
        current = current -> next;
        l1 = (l1 ? l1 -> next : l1);
        l2 = (l2 ? l2 -> next: l2);
    }
         return result.next;
    }
};