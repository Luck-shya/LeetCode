class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        int mask = 0b01010101010101010101010101010101;
        return (n & (n - 1)) == 0 && (n & mask) == n;
    }
};