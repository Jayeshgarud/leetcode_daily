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
   
         ListNode* mergeTwo(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        while(l1!=nullptr && l2!=nullptr){
            if(l1->val<=l2->val){
                curr->next=l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1!=nullptr){
            curr->next=l1;
        }

        if(l2!=nullptr){
            curr->next=l2;
        }
         
         return dummy->next;
    }
    ListNode* mergeLists(vector<ListNode*>& lists,int left,int right){
        if(left==right){
            return lists[left];
        }

        if(left>right){
            return nullptr;
        }
        int mid=left+(right-left)/2;

        ListNode* l1=mergeLists(lists,left,mid);
        ListNode* l2=mergeLists(lists,mid+1,right);

        return mergeTwo(l1,l2);
    }
         ListNode* mergeKLists(vector<ListNode*>& lists) {
              if (lists.empty()) {
            return nullptr;
        }

        return mergeLists(lists, 0, lists.size() - 1);
         }
    
};