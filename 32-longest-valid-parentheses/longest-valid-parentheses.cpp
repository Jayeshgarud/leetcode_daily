class Solution {
public:
    int longestValidParentheses(string s) {
        //stack<int> st;
        int left=0;
        int right=0;
        int count=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                left++;
            }

            else{
                right++;
            }

            if(left==right){
                count=max(count,left*2);
            }

            else if(right>left){
                left=0;
                right=0;
            }
        }
        left=0;
        right=0;

        for(int i=s.length()-1;i>=0;i--){
             if(s[i]=='('){
                left++;
            }

            else{
                right++;
            }

            if(left==right){
                count=max(count,left*2);
            }

            else if(right<left){
                left=0;
                right=0;
            }
        }

        return count;
    }
};