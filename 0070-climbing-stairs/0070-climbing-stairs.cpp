class Solution {
public:
    int climbStairs(int n) {
       if(n<=2){
        return n;
       } 
       int curr = 0;
       int ways1= 1;
       int ways2 = 2;
       for(int i=3;i<=n;i++){
        curr = ways1+ways2;
        ways1 = ways2;
        ways2 = curr;
       }
       return curr;
    }
};