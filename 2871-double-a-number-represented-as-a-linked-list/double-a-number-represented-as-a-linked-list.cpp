class Solution {
public:
    ListNode* doubleIt(ListNode* head) {

        if(head == nullptr) {
            return head;
        }

         
        if(head->next == nullptr) {

            if(head->val >= 5) {

                int value = head->val * 2;

                ListNode* newNode = new ListNode(value / 10);

                head->val = value % 10;

                newNode->next = head;

                return newNode;
            }

            head->val = head->val * 2;
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        bool carry = head->val >= 5;

        ListNode* curr = dummy;

        while(curr->next != nullptr) {

            int value = curr->next->val * 2;

            if(curr->next->next != nullptr &&
               curr->next->next->val >= 5) {
                value += 1;
            }

            curr->next->val = value % 10;

            curr = curr->next;
        }

        if(carry) {
            dummy->val = 1;
            return dummy;
        }

        return head;
    }
};