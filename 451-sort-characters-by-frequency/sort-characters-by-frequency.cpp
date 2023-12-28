class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());
        sort(freqVec.begin(), freqVec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });
        string sortedString;
        for (const auto& pair : freqVec) {
            for (int i = 0; i < pair.second; ++i) {
                sortedString += pair.first;
            }
        }

        return sortedString;

    }
};