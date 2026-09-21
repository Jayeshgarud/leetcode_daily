class Solution {
public:
    int nextGreaterElement(int n) {

        string s = to_string(n);
        int sz = s.size();

        int pivot = -1;

        
        for(int i = sz - 2; i >= 0; i--) {
            if(s[i] < s[i + 1]) {
                pivot = i;
                break;
            }
        }

        if(pivot == -1) {
            return -1;
        }

        for(int i = sz - 1; i > pivot; i--) {
            if(s[i] > s[pivot]) {
                swap(s[i], s[pivot]);
                break;
            }
        }

        reverse(s.begin() + pivot + 1, s.end());

        long long x = stoll(s);

        if(x > INT_MAX) {
            return -1;
        }

        return (int)x;
    }
};