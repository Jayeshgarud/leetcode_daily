class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
stack<char>st;
        int i =0;
        int count=0;
        int top=-1;

       while(i < word.length() && word[i] != ch){
    count++;
    i++;
}
if(i == word.length())
    return word;
i=0;
        while(i<=count){
            st.push(word[i]);
           i++;
        }
while(!st.empty()) {
    ans += st.top();
    st.pop();
}

        
 string result = word.substr(count+1);
 string ans2= ans+result;
return ans2;
    }
};