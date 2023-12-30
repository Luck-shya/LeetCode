class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int> res(2,0);
        int n=grid.size();
        vector<int> f((n*n)+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                f[grid[i][j]]++;
            }
        }
        for(int i=1;i<f.size();i++)
        {
            if(f[i]==2)
                res[0]=i;
            if(f[i]==0)
                res[1]=i;
        }
        return res;
    }
};