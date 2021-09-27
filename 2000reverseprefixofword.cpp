class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l=0, r=-1;
        for(int i=0;i< word.length();i++){
            if(ch == word[i]){
                r=i;
                break;
            }
        }
        if(r==-1){
            return word;
        }
        
        int cnt = abs(r-l+1)/2;
        while(cnt!=0){
            char tmp = word[r];
            word[r]=word[l];
            word[l]=tmp;
            l+=1;
            r-=1;
            cnt-=1;
        }
        return word;
    }
};
