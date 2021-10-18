class Solution {
public:
    int arr[46] = {0};
    int climbStairs(int n) {
        if(arr[n]>0) return arr[n];
        if(n<=0) return 0;
        if(n==1) return 1;
        if(n==2) return 1 + 1;
        if(n>2){
            arr[n] = climbStairs(n-2) + climbStairs(n-1);
            return arr[n];
        }
        return 0;
    }
};
