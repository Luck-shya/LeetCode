class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left <= right) {
            char a;
            if (('A' <= s[left] && s[left] <= 'Z' || 'a' <= s[left] && s[left] <= 'z') &&
                ('A' <= s[right] && s[right] <= 'Z' || 'a' <= s[right] && s[right] <= 'z')) {
                a = s[left];
                s[left] = s[right];
                s[right] = a;
                right--;
                left++;
            } else {
                if ('A' <= s[left] && s[left] <= 'Z' || 'a' <= s[left] && s[left] <= 'z') {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return s;
    }
};
