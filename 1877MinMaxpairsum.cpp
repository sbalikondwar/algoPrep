class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mx = 0;
        int n = nums.size()/2;
        int i=0, j=nums.size()-1;
        while(n!=0){
            mx = nums[i]+nums[j] > mx ? nums[i]+nums[j]: mx;
            n-=1;
            i++;
            j--;
        }
        return mx;
    }
};
