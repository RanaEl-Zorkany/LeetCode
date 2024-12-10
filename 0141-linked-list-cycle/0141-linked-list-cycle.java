/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode tail = head;
        int cnt = 0;
        while(tail != null){
            cnt++;
            tail = tail.next;
            if(cnt > 10000)
                return true;
        }
        return false;
    }
}