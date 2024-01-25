class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        for(vector<int> row : matrix){
            for(int n: row){
                ans.push_back(n);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};