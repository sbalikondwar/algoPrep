class Solution {
public:
    vector<int> partitionLabels(string s) {
        int arr[26] = {0};
        for(int i=0;i< s.length();i++){
            arr[s[i]-'a']= arr[s[i]-'a']>i?arr[s[i]-'a']:i;
        }
        int l=0, r=0;
        vector<int> ans;
        int cnt=0;
        for(l=0; l<s.length(); l++){
            r = arr[s[l]-'a'];
            cnt=0;
            while(l < r){
                r = arr[s[l]-'a']>r?arr[s[l]-'a']:r;
                l++;
                cnt++;
            }
            l=r;
            ans.push_back(cnt+1);
        }
        if(l < r){
            ans.push_back(cnt);
        }
        return ans;
    }
};
