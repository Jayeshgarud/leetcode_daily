class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
unordered_map<int, int> nge;
        for(int i=nums2.size()-1;i>=0;i--){
            int current=nums2[i];
            while(!st.empty()&& st.top()<=current){
                st.pop();
            }
if(st.empty()){
        nge[current]=-1;
    }
    else{
        nge[current]=st.top();
    }
    st.push(current);

        }
 vector<int> ans;

        for(int x : nums1) {
            ans.push_back(nge[x]);
        }

        return ans;
    }
};