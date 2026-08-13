class Solution {
public:
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        ListNode* ansHead = nullptr;
        ListNode* ansTail = nullptr;

        ListNode* temp1 = head1;
        ListNode* temp2 = head2;

        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int sum = carry;
            if (temp1 != nullptr) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != nullptr) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);

            if (ansHead == nullptr) {
                ansHead = node;
                ansTail = node;
            } else {
                ansTail->next = node;
                ansTail = node;
            }
        }

        return ansHead;
    }
};