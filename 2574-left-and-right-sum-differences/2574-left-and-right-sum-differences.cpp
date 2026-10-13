class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int leftSum = 0;
        int totalSum = 0;
        for(int i=0;i<n;i++){
            totalSum+= nums[i];
        }
        for(int i=0;i<n;i++){
           int rightSum = totalSum-nums[i]-leftSum;
           ans[i] = abs(leftSum-rightSum);
           leftSum+=nums[i];
        }
        return ans;
    }
};