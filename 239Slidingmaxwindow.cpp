class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        int mx = INT_MIN;
        multiset<int> s;
        for(int i=0; i<k;i++){
            s.insert(nums[i]);
        }
        for(int i=k; i<nums.size(); i++){
            ans.push_back(*(s.rbegin()));
            auto it = s.find(nums[i-k]);
            s.erase(*it);
            s.insert(nums[i]);
        }
        ans.push_back(*(s.rbegin()));
        return ans;
    }
};
