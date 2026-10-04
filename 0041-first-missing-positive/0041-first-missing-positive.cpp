class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {


        int n = nums.size();

        // for(int i=0;i<n;i++){
        //     if(nums[i]<=0 || nums[i]>n){
        //         nums[i] = n+1;
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     int curr = abs(nums[i]);
        //     if(curr>n) continue;
        //     int index = curr-1;
        //     if(nums[index]>0){
        //         nums[index] = -nums[index];
        //     }
        // }

        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         return i+1;
        //     }
        // }
        // return n+1;

        sort(nums.begin(),nums.end());
        int tar = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==tar){
                tar++;
            }
        }
       return tar;
    }
};