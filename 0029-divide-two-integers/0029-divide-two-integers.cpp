class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
       long long  count = 0;
        long long a = dividend;
        long long b = divisor;
        bool negative = (a<0)^(b<0);
        if(a<0){
            a = -a;
        }
        if(b<0){
            b = -b;
        }
       while(a>=b){
        long long temp = b;
        long long multiple = 1;

        while(a>=temp+temp){
            temp+=temp;
            multiple+=multiple;
        }
         a-= temp;
         count+=multiple;
  
       }
       if(negative){
        return -count;
       }

    return count;
    }
};