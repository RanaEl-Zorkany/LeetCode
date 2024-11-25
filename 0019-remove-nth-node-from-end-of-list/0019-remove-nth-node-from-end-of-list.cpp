/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* current = head;
        while(n--){
            right = right -> next;
            if(right == nullptr)
                return head -> next;
        }
        while(right -> next){
            left = left -> next;
            right = right -> next;
        }
        current = left -> next;
        left -> next = current -> next;
        current -> next = nullptr;
        delete current;
        return head;
    }
};