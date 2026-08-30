class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

       
        int len = 0;
        ListNode* temp = head;

        while (temp) {
            len++;
            temp = temp->next;
        }

       
        int size = len / k;

        
        int extra = len % k;

        vector<ListNode*> ans;

        for (int i = 0; i < k; i++) {

           
            ListNode* partHead = head;

           
            int currSize = size + (i < extra);

            if (currSize == 0) {
                ans.push_back(nullptr);
                continue;
            }

           
            for (int j = 1; j < currSize; j++) {
                head = head->next;
            }

           
            ListNode* next = head->next;

           
            head->next = nullptr;

           
            ans.push_back(partHead);

           
            head = next;
        }

        return ans;
    }
};