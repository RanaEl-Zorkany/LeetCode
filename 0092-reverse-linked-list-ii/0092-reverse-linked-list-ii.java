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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        int pos = 1;
        ListNode prev = null;
        ListNode current = head;
        ListNode next = null;
        ListNode leftptr = null;
        if (head == null || head.next == null || left == right) 
            return head;
        while(pos<left){
            prev = current;
            current = current.next;
            pos++;
        }
        leftptr = prev;
        ListNode start = current;
        while (pos <= right && current != null){
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
            pos++;   
        }
        start.next = current;
        if(leftptr != null)
            leftptr.next = prev;
        else
            head = prev;
        return head;
    }
}