class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false; // Strings must be of equal length to be considered "close"
        }

        unordered_map<char, int> freq1, freq2;
        unordered_set<char> chars1, chars2;

        for (char c : word1) {
            freq1[c]++;
            chars1.insert(c);
        }

        for (char c : word2) {
            freq2[c]++;
            chars2.insert(c);
        }

        // Check if the sets of characters are the same
        if (chars1 != chars2) {
            return false;
        }

        // Check if the character frequencies are the same
        vector<int> freqCount1, freqCount2;
        transform(freq1.begin(), freq1.end(), back_inserter(freqCount1), [](const auto& p) { return p.second; });
        transform(freq2.begin(), freq2.end(), back_inserter(freqCount2), [](const auto& p) { return p.second; });

        sort(freqCount1.begin(), freqCount1.end());
        sort(freqCount2.begin(), freqCount2.end());

        return freqCount1 == freqCount2;
    }
};