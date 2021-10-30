class Solution {
public:
    int dp[501][501] = {0};
    string s1,s2;
    
    int l1=0, l2=0;
    
    int mina(int a, int b, int c){
        return min(min(a,b),c);
    }
    
    int proc(int lf, int rgt){
        if(lf==0) return rgt;
        if(rgt==0) return lf;
        
        if(dp[lf][rgt] > 0) return dp[lf][rgt];
        
        if( s1[lf-1] == s2[rgt-1]){
            dp[lf][rgt] = proc(lf-1, rgt-1);
            return dp[lf][rgt];
        }
        dp[lf][rgt] = 1 + mina(proc(lf-1, rgt),
                      proc(lf, rgt-1),
                      proc(lf-1, rgt-1));
        return dp[lf][rgt];
    }
    
    int minDistance(string word1, string word2) {
        s1 = word1;
        s2 = word2;
        
        l1= word1.length();
        l2 = word2.length();
        
        int ans = proc(l1, l2);
        return ans;
    }
};
