class Solution {
public:
    int appendCharacters(string s, string t) {
      int sIndex = 0, tIndex = 0;
        while (sIndex < s.size() && tIndex < t.size()) {
            if (s[sIndex] == t[tIndex]) {
                tIndex++;
            }
            sIndex++;
        }
        return t.size() - tIndex;
    }
};