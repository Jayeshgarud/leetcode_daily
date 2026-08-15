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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
          
        while (prev->next != nullptr && prev->next->next != nullptr){
            ListNode* first = prev->next;
            ListNode* second = first->next;

           if(first->val == second->val){
            while (first->next != nullptr && first->val == first->next->val) {
        first = first->next;
    }
    prev->next = first->next;
}
else {
    prev = prev->next;
}
              

            
        }
        return dummy.next;
    }
};