class Solution {
public:
    int count =0;
    
    void calc(vector<int> nums,int sum, int target, int ind){
        if( ind == nums.size()){
            if( sum == 0){
                count+=1;
            }
            return;   
        }
            calc(nums, sum-nums[ind], target, ind+1);
            calc(nums, sum+nums[ind], target, ind+1);
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        calc(nums, target, 0, 0);
        return count;
    }
};
