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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        if (list2->val < list1->val) swap(list1, list2);
        ListNode* cur1 = list1->next;
        ListNode* prev = list1;
        ListNode* cur2 = list2; 

        while(cur1 && cur2){
            if(prev->val <= cur2->val && cur1->val >= cur2->val){
                list2 = list2->next;
                prev->next = cur2;
                cur2->next = cur1;
                cur2=list2;
            }
            prev = prev->next;
            if(prev == cur1)
                cur1 = cur1->next;
        }
        if (list2) prev->next = list2;
        return list1;
    }
};