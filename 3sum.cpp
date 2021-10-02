class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size() ;i++){
            if(i>0 && (nums[i-1]==nums[i])){
                continue;
            }
            int l = i+1, r=nums.size()-1;
            while(l < r){
                int sm = nums[l]+nums[r]+nums[i];
                if(sm > 0){
                    r--;
                }
                else if(sm < 0){
                    l++;
                }
                else{
                    vector<int> samp;
                    samp.push_back(nums[i]);
                    samp.push_back(nums[l]);
                    samp.push_back(nums[r]);
                    ans.push_back(samp);
                    while(l < r && nums[l]==nums[l+1] && l < nums.size()-1) l++;
                    while(l < r && nums[r]==nums[r-1] && r>0) r--;
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};
