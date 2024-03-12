const static auto fastio = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    int bagOfTokensScore(vector<int> &tokens, int power) {
        sort(tokens.begin(), tokens.end());
        const int n = (int)tokens.size();
        int ans = 0, score = 0;
        int p1 = 0, p2 = n - 1;
        while (p1 <= p2) {
            if (power >= tokens[p1]) {
                power -= tokens[p1++];
                ++score;
                ans = max(ans, score);
            } else if (score > 0) {
                power += tokens[p2--];
                --score;
            } else {
                break;
            }
        }
        return ans;
    }
};