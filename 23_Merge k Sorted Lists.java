/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        int count = 0;
        for(ListNode temp:lists) {
            count += 1;
        }
        if(count == 0) return null;
        PriorityQueue<ListNode> queue = new PriorityQueue<ListNode>(count,new Comparator<ListNode>() {
            @Override
            public int compare(ListNode a, ListNode b) {
                if(a.val > b.val) return 1;
                else if(a.val == b.val) return 0;
                else  return -1;
            }  
        });
        ListNode head = new ListNode(-1);
        ListNode current = head;
        for(ListNode a : lists) {
            if(a != null) queue.add(a);
        }
        
        while(!queue.isEmpty()) {
            current.next = queue.poll();
            current = current.next;
             if(current.next != null) queue.add(current.next);
        }
        return head.next;
    }
}