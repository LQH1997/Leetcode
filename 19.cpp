#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *t1 = head;
		for(int i = 1; i < n; i++) {
			t1 = t1 -> next;
		}
		ListNode** t2 = &head;
		while(t1 -> next != NULL) {
			t2 = &((*t1) -> next);
			t1 = t1 -> next;
		}
		*t2 = (*t2) -> next;
		return head;
	}
}