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
    ListNode* swapPairs(ListNode* head) {
        ListNode *ptr1 = head, *ptr2 = head, *tem;
        if(!head ||!head->next) return head;
        ptr2 = ptr1->next;
        head = ptr2;
        ptr1->next = swapPairs(ptr2->next);
        ptr2->next = ptr1;
        
        return head;
    }
};
