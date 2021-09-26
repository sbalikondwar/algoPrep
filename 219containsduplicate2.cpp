class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        if(k > nums.size()){
            k=nums.size();
        }
        for(int i=0; i<k;i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1){
                return true;
            }
        }
        int cnt =0;

        if(k==1 && nums.size()==1){
            return false;
        }
        if(nums.size() == k){
            for(int i=0; i<k;i++){
                if(mp[nums[i]] > 1){
                    return true;
                }
            }
            return false;
        }
        
        for(int i=k; i< nums.size(); i++){
            mp[nums[i]]++;
            
            if( mp[nums[i]] > 1 ){
                cnt++;
                return true;
            }
            
            mp[nums[i-k]]--;
        }
        return false;
    }
};
