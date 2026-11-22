class Solution {
public:

   int solve(vector<int>& nums, int idx, int sum ,int target){
    if(idx == nums.size()){
        return sum == target;
    }

    int add = solve(nums,idx+1,sum+nums[idx],target);
    int subtract = solve(nums,idx+1,sum-nums[idx],target);

    return add+subtract;
    

   }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        int idx = 0;
       int ans =  solve(nums,0,0,target);
        return ans;
    }
};