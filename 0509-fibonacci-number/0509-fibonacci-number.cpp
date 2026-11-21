class Solution {
public:
    int fibDp(int n , vector<int>&f){
        if(n==1 || n==0){
            return n;
        }
        if(f[n]!=-1)
            return f[n];
            f[n] = (fibDp(n-1,f)+fibDp(n-2,f));
        return f[n];
    }
    int fib(int n) {
        vector<int>f(n+1,-1);
       return fibDp(n,f);
    }
};