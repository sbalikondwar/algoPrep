class Solution {
public:
    int arr[100000+1] = {-1000000000};
    
    int mx(int a, int b){
        return a>=b?a:b;
    }
    
    int solve(int sm, int ind, vector<int> nums){
        if(ind > nums.size()-1) return 0;
        //if(arr[ind] > -1000000000) return arr[ind];
        
        int a = solve(sm + nums[ind], ind+1, nums);
        int b = solve(0, ind+1, nums);
        int c = sm + nums[ind];
        //cout<<a<<" "<<b<<" "<<c<<" "<<sm<<" "<<ind<<"\n";
        arr[ind] = mx(a, mx(b,c));
        
        return arr[ind];
    }
    
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans = solve(0, 0, nums);
        return ans;
    }
};
