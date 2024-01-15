#include <vector>

class Solution {
public:
    int findTheWinner(int n, int k) {
        std::vector<int> tot;
        for (int i = 1; i <= n; i++) {
            tot.push_back(i);
        }

        size_t current_index = 0;

        while (tot.size() > 1) {
            current_index = (current_index + k - 1) % tot.size();
            tot.erase(tot.begin() + current_index);
        }

        return tot[0];
    }
};
