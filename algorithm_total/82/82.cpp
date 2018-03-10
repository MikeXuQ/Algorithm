# include <iostream>
using namespace std;
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x, ListNode* n) : val(x), next(n) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        
        ListNode *newHead = new ListNode(0);
        newHead->next = head;
        head = newHead;
        
        ListNode *p1 = head, *p = head->next;
        while(p != NULL){
            while(p->next && p->next->val == p->val)
                p = p->next;
            if(p1->next != p)
                p1->next = p->next;
            else
                p1 = p;
            p = p->next;
        }
        return head->next;
    }
};

int main() {
    Solution s;
    ListNode* head = new ListNode(1, new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, NULL))))));
    ListNode* now = head;
    while (now != NULL) {
        cout << now -> val << " ";
        now = now -> next;
    }
    cout << endl;
    head = s.deleteDuplicates(head);
    now = head;
    while (now != NULL) {
        cout << now -> val << " ";
        now = now -> next;
    }
    
}