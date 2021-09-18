#include<bits/stdc++.h>

using namespace std;

//With sliding window

class Solution {
public:
    int countGoodSubstrings(string s) {
        map<int, int> mp;
        int n=0;
        while(n < 2){
            mp[s[n]]++;
            n+=1;
        }
        int cnt=0;
        for(int i=2; i < s.length(); i++){
            mp[s[i]]++;
            if( mp.size() == 3)
                cnt++;
            mp[s[i-2]]--;
            if(mp[s[i-2]]==0)
                mp.erase(s[i-2]);
        }
        return cnt;
    }
};
