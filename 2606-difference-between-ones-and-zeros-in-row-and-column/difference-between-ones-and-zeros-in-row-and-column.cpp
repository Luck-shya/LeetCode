class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rowones(m,0);
        vector<int> colones(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rowones[i]+=grid[i][j];
                colones[j]+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j] =  2*(rowones[i] +colones[j]) - m -n;
            }
        }
        return grid;
    }
};