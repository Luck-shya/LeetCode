#include <vector>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowr = 0, highr = matrix.size() - 1;

        while (lowr <= highr) {
            int midr = lowr + (highr - lowr) / 2;
            int lowc = 0;
            int highc = matrix[midr].size() - 1;

            if (matrix[midr][lowc] <= target && target <= matrix[midr][highc]) {
                // Perform binary search within the row
                while (lowc <= highc) {
                    int midc = lowc + (highc - lowc) / 2;
                    if (matrix[midr][midc] == target) {
                        return true;
                    } else if (matrix[midr][midc] < target) {
                        lowc = midc + 1;
                    } else {
                        highc = midc - 1;
                    }
                }
                return false;  // Target not found in the current row
            } else if (matrix[midr][lowc] < target) {
                lowr = midr + 1;
            } else {
                highr = midr - 1;
            }
        }

        return false;
    }
};
