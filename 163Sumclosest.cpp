class Solution {
public:
    /*
    int mn(int a, int b){
        return a>=b?b:a;
    }*/
    
    int threeSumClosest(vector<int>& nums, int target) {
        int dif = 10000000;
        if( nums.size() < 3){
            return 0;
        }
        if( nums.size() == 3){
            return nums[0]+nums[1]+nums[2];
        }
        sort(nums.begin(), nums.end());
        int l=0, r=0, ans=0;
        for(int i=0; i < nums.size()-2; i++){
            l=i+1;
            r = nums.size()-1;
            while(l < r ){
                int sm = nums[i]+nums[l]+nums[r];
                //dif = mn(dif, abs(target-sm));
                if( abs(target-sm) < dif ){
                    dif =abs(target-sm) ;
                    ans = sm;
                }
                //cout<<ans<<" "<<dif<<" "<<" "<<l<<" "<<r<<" "<<sm<<"\n";
                if(sm > target){
                    r--;
                }
                else if(sm < target){
                    l++;
                }
                else{
                    return ans;
                }
            }
            l=0, r=0;
        }
        return ans;
    }
};
