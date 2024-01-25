#include <vector>

class Solution {
public:
    int kthSmallest(std::vector<std::vector<int>>& matrix, int k) {
        int n = matrix.size();
        int left = matrix[0][0];  // Smallest element in the matrix
        int right = matrix[n - 1][n - 1];  // Largest element in the matrix

        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = countLessEqual(matrix, mid);

            if (count < k) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }

private:
    // Helper function to count the number of elements less than or equal to target
    int countLessEqual(const std::vector<std::vector<int>>& matrix, int target) {
        int n = matrix.size();
        int count = 0;
        int row = 0;
        int col = n - 1;

        while (row < n && col >= 0) {
            if (matrix[row][col] <= target) {
                count += col + 1;  // Count all elements in the current column
                ++row;  // Move to the next row
            } else {
                --col;  // Move to the previous column
            }
        }

        return count;
    }
};
