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
    ListNode* sortList(ListNode* head) {
     vector<int> arr;

     ListNode* temp=head;
     while(temp!=nullptr){
        arr.push_back(temp->val);
        temp=temp->next;
     }
     sort(arr.begin(),arr.end());
int i=0;
     ListNode* temp1=head;
        while(temp1!=nullptr){
     temp1->val=arr[i];
     temp1 = temp1->next; 
        i++;
        }
        return head;
        }
        
    

};