class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) {
        int score = 0;
        std::sort(tokens.begin(), tokens.end()); 
        int left = 0, right = tokens.size() - 1;
        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left++];
                score++;
            } else if (score > 0 && left != right) {
                power += tokens[right--];
                score--;
            } else {
                break;
            }
        }
        return score;
    }
};