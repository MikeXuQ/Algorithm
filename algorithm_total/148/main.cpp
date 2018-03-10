#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
   ListNode(int x, ListNode* n = NULL) : val(x), next(n) {}
 };

class Solution {
private:
    ListNode* mergeList(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* headPtr = &head;
        while(l1 && l2) {
            if(l1->val < l2->val) {
                headPtr->next = l1;
                l1 = l1->next;
            } else {
                headPtr->next = l2;
                l2 = l2->next;
            }
            headPtr = headPtr->next;
        }
        headPtr->next = (!l1 )? l2 : l1;
        return head.next;
    }

    ListNode* getMid(ListNode* front, ListNode* back) {
        if(front == back) return front;
        ListNode* slow = front;
        ListNode* fast = front;
        while(slow && fast && fast->next && fast->next->next ) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* mergeSortList(ListNode* head, ListNode* tail) {
        if(head == tail) return head;
        ListNode* mid = getMid(head, tail);
        ListNode* sortedPost = mergeSortList(mid->next, tail);
        mid->next = NULL;
        ListNode* sortedPre = mergeSortList(head, mid);

        return mergeList(sortedPre, sortedPost);
    }


public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        ListNode* tail = head;
        while(tail->next) {
            tail = tail->next;
        }
        return mergeSortList(head, tail);
    }
};

//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        ListNode* ahead = new ListNode(0);
//        ahead->next = head;
//        ListNode* temp = ahead;
//        int len = 0;
//        while (temp != NULL) {
//            ++len;
//            temp = temp->next;
//        }
//        split(1, len, ahead);
//        return head;
//    }
//
//    ListNode* get(int pos, int tail, ListNode* h) {
//        if (pos < 0)
//            return NULL;
//        ListNode *head = NULL;
//        int num = pos;
//        while (num--) {
//            h = h->next;
//        }
//        int len = tail - pos + 1;
//        ListNode* cur;
//        while (len--) {
//            if (head == NULL) {
//                head = new ListNode(h->val);
//                cur = head;
//            } else {
//                cur -> next = new ListNode(h->val);
//                cur = cur-> next;
//            }
//            h = h -> next;
//        }
//
//        return head;
//    }
//
//    ListNode* getPre(int pos, ListNode* h) {
//        if (pos == 0) {
//            return NULL;
//        }
//        while (--pos) {
//            h = h->next;
//        }
//
//        return h;
//    }
//
//    void split(int head, int tail, ListNode* h) {
//        if (head == tail - 1) {
//            return ;
//        }
//        int mid = (head + tail) / 2;
//        split(head, mid, h);
//        split(mid, tail, h);
//        ListNode* r = mergeTwoLists(get(head, mid - 1, h), get(mid, tail, h));
//        ListNode* headPre = getPre(head, h), *tailPre = getPre(tail, h);
//        headPre->next = r;
//        r->next = tailPre->next->next;
//
//    }
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode* cur1 = l1, *cur2 = l2;
//        ListNode* r = NULL, *head = NULL;
//        while (cur1 != NULL && cur2 != NULL) {
//            if (r == NULL) {
//                if (cur1->val < cur2->val) {
//                    r = new ListNode(cur1 -> val);
//                    cur1 = cur1->next;
//                } else {
//                    r = new ListNode(cur2 -> val);
//                    cur2 = cur2->next;
//                }
//                head = r;
//            } else {
//                if (cur1->val < cur2->val) {
//                    r -> next = new ListNode(cur1 -> val);
//                    cur1 = cur1->next;
//                } else {
//                    r -> next = new ListNode(cur2 -> val);
//                    cur2 = cur2->next;
//                }
//                r = r -> next;
//            }
//        }
//        if (r != NULL) {
//            if (cur1 != NULL) {
//                r -> next = cur1;
//            }
//            if (cur2 != NULL) {
//                r -> next = cur2;
//            }
//        } else {
//            if (cur1 != NULL) {
//                r = cur1;
//            }
//            if (cur2 != NULL) {
//                r = cur2;
//            }
//            head = r;
//        }
//
//        return head;
//    }
//};


int main() {
    ListNode* l1 = new ListNode(3, new ListNode(4, new ListNode(1, new ListNode(5, new ListNode(2, new ListNode(6))))));
    Solution s;
    ListNode* r = s.sortList(l1);
    while (r != NULL) {
        cout << r->val << " ";
        r = r->next;
    }
    cout << endl;
    return 0;
}