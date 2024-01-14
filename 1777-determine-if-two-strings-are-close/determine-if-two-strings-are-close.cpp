class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> freq1, freq2;
        unordered_set<char> chars1, chars2;
        int n =word1.size();
        int m=word2.size();
        if(n!=m){
            return false;
        }

        for (char c : word1) {
            freq1[c]++;
            chars1.insert(c);
        }

        for (char c : word2) {
            freq2[c]++;
            chars2.insert(c);
        }
        if (chars1 != chars2) {
            return false;
        }
        vector<int> freqCount1, freqCount2;
        for (auto& pair : freq1) {
            freqCount1.push_back(pair.second);
        }
        int p=freqCount1.size();

        for (auto& pair : freq2) {
            freqCount2.push_back(pair.second);
        }

        sort(freqCount1.begin(), freqCount1.end());
        sort(freqCount2.begin(), freqCount2.end());

        for(int i=0;i<p;i++){
            if(freqCount1[i]!=freqCount2[i]){
                return false;
            }
        }
        return true;
    }
};