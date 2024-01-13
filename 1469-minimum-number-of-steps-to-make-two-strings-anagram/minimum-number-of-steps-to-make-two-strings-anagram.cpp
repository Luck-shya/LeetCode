#include <unordered_map>
#include <string>

class Solution {
public:
    int minSteps(const std::string& s, const std::string& t) {
        std::unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]--;
        }

        for (char ch : t) {
            freq[ch]++;
        }

        int pos = 0;
        for (const auto& pair : freq) {
            pos += std::abs(pair.second);
        }

        return pos / 2;
    }
};
