class Solution {
public:
 double myPow(double x, int n) {

      long double y=x;
   long long power=n;

   if(power<0){
    y=1.0/y;
    power=-power;
   }
long double ans=1.0;

while(power>0){
    if(power%2==1){
        ans*=y;
       power=power-1;

    }
    else{
        power=power/2;
        y*=y;
    }
    }  
    return ans; 
           
       
        
    }
};