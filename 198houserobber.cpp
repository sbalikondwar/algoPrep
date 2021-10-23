class Solution {
public:
    int arr[101] = {0};
    int vst[101] = {0};
    
    int mx(int a, int b){
        return a>=b?a:b;
    }
    
    int proc(int ind, vector<int> nums){

        if(ind >= nums.size()){
            return 0;
        }
        if(nums[ind] == 0){
            vst[ind]=1;
            return mx( proc(ind+1, nums), proc(ind+2, nums));
        }
        if(vst[ind]==1){
            return arr[ind];
        }
        vst[ind]=1;
        int a = nums[ind] + mx( proc(ind+2, nums), proc(ind+3, nums));
        arr[ind] = mx( proc(ind+1, nums), a);
        return arr[ind];
    }
    
    int rob(vector<int>& nums) {
        int q=0;
        for(int i=0;i< nums.size();i++){
            q+=nums[i];
        }
        if(q==0) return 0;
        int ans = proc(0, nums);
        return ans;
    }
};
