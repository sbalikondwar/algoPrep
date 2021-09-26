class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0, mn= 100000;
        int sm=0;
        while(i<nums.size() && j< nums.size()){
            while( sm < target && j < nums.size()){
                sm+=nums[j];
                j++;
                //cout<<sm<<"for"<<j<<"\n";
            }
            //cout<<sm<<" "<<i<<" "<<j<<"\n";
            //j--;
            mn = mn < abs(i-j) ? mn: abs(i-j);
            sm -= nums[i];
            i++;
        }
        
        while(i < nums.size()){
            if(sm >= target){
                mn = mn < abs(i-j) ? mn: abs(i-j);
                sm-=nums[i];
                i++;
            }
            else{
                break;
            }
        }
        
        int smm=0;
        
        for(int i=0;i< nums.size();i++){
            smm+=nums[i];
        }
        if(smm < target){
            return 0;
        }
        return mn;
    }
};
