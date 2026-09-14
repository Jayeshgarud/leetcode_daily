class Solution {
public:
    bool isValid(string s) {
      
      int size=s.size();
      char st[size];  
        int top=-1;
      for(int i=0;i<size;i++){
        if(s[i]=='(' ||s[i]=='{'||s[i]=='['){
            top++;
            st[top]=s[i];
        }

        if(s[i]==')'||s[i]=='}'||s[i]==']'){
            
 if(top==-1){
    return false;
 }
else if ((s[i] == ')' && st[top] == '(') ||
    (s[i] == '}' && st[top] == '{') ||
    (s[i] == ']' && st[top] == '[')){
    top--;
}
else{
    return false;
}
        }
      }
      if(top == -1) {
   return true;
}
else {
   return false;
}
    }
};