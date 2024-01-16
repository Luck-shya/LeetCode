class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> bl;
        for (char a : text) {
            bl[a]++;
        }

        int count = 0;
        while (bl['a'] >= 1 && bl['b'] >= 1 && bl['n'] >= 1 && bl['l'] >= 2 && bl['o'] >= 2) {
            bl['a']--;
            bl['b']--;
            bl['n']--;
            bl['l'] -= 2;
            bl['o'] -= 2;
            count++;
        }

        return count;
    }
};