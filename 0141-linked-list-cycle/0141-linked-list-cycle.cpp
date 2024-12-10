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
    bool hasCycle(ListNode *head) {
        ListNode *tail = head;
        long cnt = 0;
        while(tail != nullptr){
            cnt++;
            tail = tail -> next;
            if(cnt > 10000)
                return true;
        }
        return false;
    }
};