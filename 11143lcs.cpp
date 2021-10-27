class Solution {
public:
    int arr[1001][1001] = {0};
    int str1len=0, str2len=0;
    
    int proc(int upind, int downind, string s1, string s2){
        if( upind >= str1len || downind >= str2len) return 0;
        if(arr[upind][downind] > 0) return arr[upind][downind];
        
        //cout<<upind<<" "<<downind<<s1[upind]<<" "<<s2[downind]<<(s1[upind]==s2[downind])<<"\n";
        if( s1[upind] == s2[downind]){
            arr[upind][downind] = 1+ proc(upind+1, downind+1, s1,s2);
            //cout<<upind<<" "<<downind<<s1[upind]<<" "<<s2[downind]<<(s1[upind]==s2[downind])<<"\n";
        }else{
        arr[upind][downind] = max( proc(upind+1, downind, s1,s2), proc(upind, downind+1, s1,s2));
        }
        return arr[upind][downind];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        str1len = text1.length();
        str2len = text2.length();
        
        return proc(0,0, text1, text2);
    }
};

class Solution {
public:
    int dp[1001][1001] = {0};
    
    int l1 = 0;
    int l2 = 0;
    
    void proc(string s1, string s2){
        for(int lf = 0; lf <= l1; lf++){
            for(int rgt = 0; rgt <= l2; rgt++){
                if(lf==0 || rgt==0){
                    dp[lf][rgt] =0;
                }
                else if(s1[lf-1] == s2[rgt-1]){
                    dp[lf][rgt] = dp[lf-1][rgt-1]+1;
                }else{
                    dp[lf][rgt] = max(dp[lf][rgt-1], dp[lf-1][rgt]);
                }
            }
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        l1 = text1.length();
        l2 = text2.length();
        
        proc(text1, text2);
        return dp[l1][l2];
    }
};
