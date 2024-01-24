#include <string>
#include <unordered_map>

class Solution {
public:
    bool digitCount(string num) {
        map<char, int> count;

        for (char c : num) {
            count[c]++;
        }

        for (int i = 0; i < num.size(); i++) {
            if (count[i + '0'] != (num[i] - '0')) {
                return false;
            }
        }

        return true;
    }
};