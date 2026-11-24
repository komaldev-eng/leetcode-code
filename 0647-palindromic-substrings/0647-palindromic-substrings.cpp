class Solution {
public:
  
   int palindrome(string &s,int i,int j){
       

        if(i<0 || j>=s.length()){
            return 0;
        }
       
          if(s[i]!=s[j]){
            return 0;
          }
        return 1+palindrome(s,i-1,j+1);
    }
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
           int a = palindrome(s,i,i);
           int b = palindrome(s,i,i+1);
            count += a+b;
        }

     
       return count; 
    }
};