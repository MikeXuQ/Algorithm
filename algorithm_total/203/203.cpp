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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* forward = new ListNode(2), *cur = head, *pre = forward;
        forward->next = head;
        while (cur != NULL) {
            if (cur -> val == val) {
                pre -> next = cur -> next;
            } else {
                pre = cur;
            }
            cur = cur->next;
        }
        return forward -> next;
    }
};