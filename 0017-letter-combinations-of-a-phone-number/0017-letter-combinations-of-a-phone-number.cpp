class Solution {
public:
   vector<string>mp = {
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
   };

   void solve(string digits, string ans,vector<string>&list){
    if(digits.length()==0){
        list.push_back(ans);
        return;
    }
    char ch = digits.at(0);
    int nums = ch-'0';
    string press = mp[nums];

    for(int i=0;i<press.length();i++){
        solve(digits.substr(1),ans+press.at(i),list);
    }
   }
    vector<string> letterCombinations(string digits) {
        vector<string>list;
        solve(digits,"",list);
        return list;
    }

}; 