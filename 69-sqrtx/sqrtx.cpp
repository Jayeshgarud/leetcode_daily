class Solution {
public:
    int mySqrt(int x) {
      int i;
      for(int i=1;i<=x;i++){
       
         long long  sum=1LL*i*i;
        if(sum==x)
        {return i;
        }
        if(sum>x){
            return i-1;
        }
       
      }
    return 0;
    }

};