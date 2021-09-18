class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg= -10e9;
        int sm=0;
        for(int i=0; i < k-1 ; i++){
            sm+=nums[i];
        }
        int strpnt=0;
        int retval =0;
        for(int i=k-1; i < nums.size(); i++){
            sm += nums[i];
            //cout<<sm<<" "<<avg;
            double ans = sm/(double)k;
            avg = (avg >= ans) ? avg:ans;
            sm -= nums[strpnt];
            strpnt++;
        }
        return avg;
    }
};
