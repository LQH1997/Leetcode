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
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(k == 1) return head;
    int count = 0;
    ListNode* tempCurrent = head;
    while(tempCurrent != NULL) {
        tempCurrent = tempCurrent->next;
        count++;
    }
    if(count < k) return head;
    count = 0;
    ListNode *temp[k];
    ListNode *returnHead = new ListNode(-1);
    ListNode *returnCurrent = returnHead;
    ListNode *current = head;
    while(current != NULL) {
        temp[count] = current;
        count++;
        current = current -> next;
        if(count == k) {
            for(int j = k - 1; j >= 0; j--) {
             returnCurrent -> next = new ListNode(temp[j] -> val);

             returnCurrent = returnCurrent -> next;
            }
            count = 0;
        } 
    }

    for(int j = 0; j < count; j++) {

        returnCurrent->next = new ListNode(temp[j]->val);
        returnCurrent = returnCurrent -> next;
    }
    return returnHead->next;
    }
};