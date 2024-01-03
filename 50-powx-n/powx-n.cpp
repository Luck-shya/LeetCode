class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0; // Any number raised to the power of 0 is 1
        }

        double result = 1.0;
        double current_power = x;
        int exp = abs(n); // Taking the absolute value for handling negative exponents

        while (exp > 0) { // Use exp instead of n for loop condition
            if (exp % 2 == 1) {
                result *= current_power;
            }
            current_power *= current_power; // Squaring the current value
            exp /= 2;
        }

        return (n < 0) ? 1.0 / result : result;
    }
};
