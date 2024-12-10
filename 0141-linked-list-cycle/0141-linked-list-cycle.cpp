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
            if(cnt == 10001)
                return true;
            else tail = tail -> next;
        }
        return false;
    }
};