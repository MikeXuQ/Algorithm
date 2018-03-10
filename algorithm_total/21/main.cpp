#include <iostream>
using namespace std;


//Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x, ListNode* xx =NULL) : val(x), next(xx) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* cur1 = l1, *cur2 = l2;
        ListNode* r = NULL, *head = NULL;
        while (cur1 != NULL && cur2 != NULL) {
            if (r == NULL) {
                if (cur1->val < cur2->val) {
                    r = new ListNode(cur1 -> val);
                    cur1 = cur1->next;
                } else {
                    r = new ListNode(cur2 -> val);
                    cur2 = cur2->next;
                }
                head = r;
            } else {
                if (cur1->val < cur2->val) {
                    r -> next = new ListNode(cur1 -> val);
                    cur1 = cur1->next;
                } else {
                    r -> next = new ListNode(cur2 -> val);
                    cur2 = cur2->next;
                }
                r = r -> next;
            }
        }
        if (r != NULL) {
            if (cur1 != NULL) {
                r -> next = cur1;
            }
            if (cur2 != NULL) {
                r -> next = cur2;
            }
        } else {
            if (cur1 != NULL) {
                r = cur1;
            }
            if (cur2 != NULL) {
                r = cur2;
            }
            head = r;
        }

        return head;
    }
};

int main() {
    ListNode* cur1 = new ListNode(1, new ListNode(2, new ListNode(4, NULL)));
    ListNode* cur2 = new ListNode(1, new ListNode(3, new ListNode(4, NULL)));
    Solution s;
    ListNode* r = s.mergeTwoLists(cur1, cur2);
    while (r != NULL) {
        cout << r->val << " ";
        r = r -> next;
    }
    return 0;
}