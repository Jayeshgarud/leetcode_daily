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
    ListNode* oddEvenList(ListNode* head) {
       if(head==nullptr || head->next==nullptr||head->next->next==nullptr){
        return head;
     } 
    ListNode* prev=head;
    ListNode* curr=head->next;
    ListNode* n=curr->next;
    ListNode* temp=head;
int count = 0;
        while (temp != nullptr && temp->next != nullptr) {
            count++;
            temp = temp->next->next;
        }
          temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    ListNode* tail=temp;

       

      
      
        while (count--) {

        n=curr->next;

        prev->next=n;
        tail->next=curr;
        tail=curr;
        prev=n;
       if (n != nullptr) {
                curr = n->next;
            }
    }
    tail->next=nullptr;

    return head;
    }
};