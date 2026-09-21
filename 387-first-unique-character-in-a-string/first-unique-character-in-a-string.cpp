class Solution {
public:
    int firstUniqChar(string s) {
       
       unordered_map<char, int> freq;
stack<char> st;
for(char ch : s) {
    freq[ch]++;
}

for(int i=0;i<s.size();i++){
    if(freq[s[i]]==1){
        return i;
        break;
    }
}


return -1;
    }
};