class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
      int n= tem.size();

      vector<int> ans(n,0);
      stack<int>st;

      for(int i=n-1;i>=0;i--){
        while(!st.empty() && tem[st.top()]<=tem[i]){
            st.pop();
        }

        if(!st.empty()){
            ans[i]=st.top()-i;
        }
        st.push(i);
      }   
      return ans;
    }
};