class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = l1, *q = l2, *prev = nullptr;
        int carry = 0;
        while (p != nullptr && q != nullptr) {
            int sum = carry + p->val + q->val;
            carry = sum / 10;
            p->val = sum % 10;
            prev = p;
            p = p->next;
            q = q->next;
        }
        ListNode* r = (p != nullptr) ? p : q;
        prev->next = r;
        
        while (r != nullptr) {
            int sum = carry + r->val;
            carry = sum / 10;
            r->val = sum % 10;
            prev = r;
            r = r->next;
        }
        if (carry > 0) {
            prev->next = new ListNode(carry);
        }
        return l1;
    }
};