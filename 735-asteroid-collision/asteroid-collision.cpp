class Solution {
public:
    vector<int> asteroidCollision(vector<int>& astr) {
      stack<int> st;

      for(int ast:astr){
        bool alive=true;

        while(alive && ast<0 && !st.empty() && st.top()>0){
            if(st.top()<-ast){
                st.pop();
            }

            else if(st.top()==-ast){
                st.pop();
                alive=false;
            }

            else{
                alive=false;
            }
        }

        if(alive){
            st.push(ast);
        }
      } 

      vector<int>ans(st.size());
      for(int i=(int)ans.size()-1;i>=0;i--){
        ans[i]=st.top();
        st.pop();
      } 
   return ans;
    }

};