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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int pos = 1;
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;
        ListNode* leftptr = NULL;
        if (head == NULL || head->next == NULL || left == right) 
            return head;
        while(pos<left){
            prev = current;
            current = current->next;
            pos++;
        }
        leftptr = prev;
        ListNode* start = current;
        while (pos <= right && current != NULL){
            next=current->next;
            current->next = prev;
            prev = current;
            current = next;
            pos++;   
        }
        start->next = current;
        if(leftptr != NULL)
            leftptr->next = prev;
        else
            head = prev;
        return head;
    }
};