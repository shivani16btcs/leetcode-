//problem: https://leetcode.com/explore/learn/card/binary-search/125/template-i/950/
//finding square root without inbulit in c 

class Solution {
public:
    int mySqrt(int x) {
       long int p=0,a=x/2;
       if(x<=1){
            return x;
        }
        while(x<a*a){
            a=a-1;
            p=a/2;
            if(x<p*p){   // to decrease to TLE(time limit exceed)
             a=p;   
            }
        }
        return a;
    }
};