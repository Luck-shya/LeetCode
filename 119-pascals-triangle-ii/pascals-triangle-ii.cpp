class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.push_back({1});

        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; ++j) {
                row[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
            pascalTriangle.push_back(row);
        }

        return pascalTriangle[rowIndex];
    }
};
