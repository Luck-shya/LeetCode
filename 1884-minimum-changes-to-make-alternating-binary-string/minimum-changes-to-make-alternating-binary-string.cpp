class Solution {
public:
    int minOperations(string s) {
        int flipCount = 0;
        int n = s.size();

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                flipCount++;
                s[i] = (s[i] == '1') ? '0' : '1';
            }
        }

        return min(flipCount, n - flipCount);
    }
};