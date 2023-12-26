class Solution {
public:
    int maxScore(string s) {
        int zeros = 0, ones = 0;
        int maxScore = 0;
        for (char c : s) {
            if (c == '1') {
                ones++;
            }
        }

        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '0') {
                zeros++;
            } else {
                ones--;
            }
            int currentScore = zeros + ones;
            if (currentScore > maxScore) {
                maxScore = currentScore;
            }
        }

        return maxScore;
    }
};
