#include <string>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int count = 0;
        int p1 = 0;
        int n = s.size();
        int p2 = n - 1;

        while (p1 < p2 && count <= 1) {
            if (s[p1] != s[p2]) {
                count++;
            } else {
                p2--;
            }
            p1++;
        }

        if (count <= 1) {
            return true;
        }

        count = 0;
        p1 = 0;
        p2 = n - 1;

        while (p1 < p2 && count <= 1) {
            if (s[p1] != s[p2]) {
                count++;
            } else {
                p1++;
            }
            p2--;
        }

        return count <= 1;
    }
};
