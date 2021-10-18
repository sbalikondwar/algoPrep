class Solution {
public:
    int mem[100000+1] = {0};
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<=1 ){
            return 0;
        }
        int ans=0;
        mem[1] = prices[0];
        for(int i=1;i<n;i++){
            mem[i+1] = mem[i] > prices[i] ? prices[i]:mem[i];
            ans = ans > prices[i]-mem[i]?ans: prices[i]-mem[i];
        }
        return ans;
    }
};
