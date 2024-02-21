class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        // Find the common MSB (Most Significant Bit) of left and right
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        // Left shift the common MSB to obtain the result
        return left << shift;
    }
};
