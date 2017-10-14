#include <iostream>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* current = head;
        if(l1 != NULL) cout << "a" << endl;
		if(l2 != NULL) cout << "b" << endl;
        while(l1 != NULL && l2 != NULL) {
        	cout << "in while" << endl;
            if(l1 -> val < l2 -> val) {
           	cout << "l1 < l2" << endl;
                current -> next = new ListNode(l1 -> val);
                l1 = l1 -> next;
     			current = current -> next;
            } else {
            	cout << "in else" << endl;
                current -> next = new ListNode(l2 -> val);
                l2 = l2 -> next;
                current = current -> next;
            }
        }
        if(l1 == NULL) {
        	cout << "after loop, l1 == NULL" << endl;
            while(l2 != NULL) {
                current -> next = new ListNode(l2 -> val);
                l2 = l2 -> next;
                current = current -> next;
            }
        } else {
        	cout << "after loop, l2 == NULL" << endl;
            while(l1 != NULL) {
                current -> next = new ListNode(l1 -> val);
                l1 = l1 -> next;
                current = current -> next;
            }
        }
        return head->next;
    }

void print(ListNode* a) {
	while(a != NULL) {
		cout << a -> val << " ";
		a = a -> next;
	}
	cout << endl;
}

int main() {
	ListNode* head1 = new ListNode(-1);
	ListNode* head2 = new ListNode(-1);
	ListNode* curr1 = head1;
	ListNode* curr2 = head2;
	//int arr1[0] = {1,3,5};
	int arr2[3] = {2,4,6};
	//for(int i = 0; i < 3; i++) {
	//	curr1 -> next = new ListNode(arr1[i]);
	//	curr1 = curr1 -> next;
	//}
	for(int i = 0; i < 3; i++) {
		curr2 -> next = new ListNode(arr2[i]);
		curr2 = curr2 -> next;
	}

	print(mergeTwoLists(head1 -> next, head2 -> next));
}