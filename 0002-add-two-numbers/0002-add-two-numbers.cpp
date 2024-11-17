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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remainder = 0;
        ListNode*result = new ListNode();
        ListNode*current = result; 
        while(l1 != nullptr || l2 != nullptr || remainder != 0){
            int sum = remainder;
            if(l1 != nullptr){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != nullptr){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            remainder = sum / 10;
            current -> next = new ListNode(sum % 10);
            current = current -> next;
            
        }
        return result -> next;
    }
};