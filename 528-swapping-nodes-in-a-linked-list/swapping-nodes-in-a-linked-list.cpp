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
    ListNode* swapNodes(ListNode* head, int k) {
      vector<int> arr;

    while(head != nullptr) {
        arr.push_back(head->val);
        head = head->next;
    }
swap(arr[k-1], arr[arr.size()  - k]);
     head = new ListNode(arr[0]);
ListNode* curr = head;

for(int i = 1; i < arr.size(); i++) {
    curr->next = new ListNode(arr[i]);
    curr = curr->next;
}

return head;

    }
};