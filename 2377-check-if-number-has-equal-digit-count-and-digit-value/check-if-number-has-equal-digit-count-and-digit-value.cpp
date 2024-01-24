#include <string>
#include <unordered_map>

class Solution {
public:
    bool digitCount(const std::string& num) {
        unordered_map<char, int> digitCount;

        for (int i = 0; i < num.size(); i++) {
            digitCount[num[i]]++;
        }
        for (int i = 0; i < num.size(); i++) {
            if (digitCount[i+'0'] != (num[i] - '0' )) {
                return false;
            }
        }

        return true;
    }
};