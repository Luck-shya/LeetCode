class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1;
        string largestSubstring = "";

        for (int i = 0; i < num.size(); ++i) {
            if (i > 0 && num[i] == num[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count == 3) {
                string currentSubstring = num.substr(i - 2, 3);
                if (currentSubstring > largestSubstring) {
                    largestSubstring = currentSubstring;
                }
                count = 0;
            }
        }

        return largestSubstring;
    }
};
