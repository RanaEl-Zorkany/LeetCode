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
    ListNode* front;
    bool stop;
    void reorder(ListNode* curr) {
        if (!curr) return;

        reorder(curr->next);

        if (stop) return;

        if (front == curr || front->next == curr) {
            curr->next = nullptr;
            stop = true;
            return;
        }

        ListNode* nextFront = front->next;
        front->next = curr;
        curr->next = nextFront;
        front = nextFront;
    }
public:
    void reorderList(ListNode* head) {
        front = head;
        stop = false;
        reorder(head);
    }
};