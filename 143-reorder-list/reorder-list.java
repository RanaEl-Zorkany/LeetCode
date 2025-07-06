/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    private ListNode front;
    private boolean stop;
    private void reorder(ListNode curr){
        if (curr == null) return;

        reorder(curr.next);

        if (stop) return;

        if (front == curr || front.next == curr) {
            curr.next = null;
            stop = true;
            return;
        }

        ListNode nextFront = front.next;
        front.next = curr;
        curr.next = nextFront;
        front = nextFront;
    }
    public void reorderList(ListNode head) {
        stop = false;
        front = head;
        reorder(head);
    }
}