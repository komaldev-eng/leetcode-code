class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
        }
        if(sum%3!=0){
            return false;
        }
        int target = sum/3;
       int temp = 0;
       int count = 0;
       for(int i=0;i<arr.size()-1;i++){
        temp += arr[i];
        if(temp==target){
            count++;
            temp = 0;
        }
        if(count == 2){
            return true;
        }
       }
       return false;
    }
};