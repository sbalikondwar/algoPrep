class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;
        for(int i=0; i< matrix[0].size();i++){
            for(int j=0;j< matrix.size();j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        int n = matrix[0].size();
        n = n*n;
        int ans = arr[0];
        for(int i=0;i<n && i<k ;i++){
            ans = arr[i];
        }
        return ans;
    }
};
