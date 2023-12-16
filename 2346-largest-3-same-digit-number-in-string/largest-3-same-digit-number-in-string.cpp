class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1;
        string ans;
        vector<string> anss;

        for (int i = 0; i < num.size(); ++i) {
            if (i > 0 && num[i] == num[i - 1]) {
                count++;
                ans += num[i];
            } else {
                count = 1;
                ans = num[i];
            }

            if (count == 3) {
                anss.push_back(ans);
                ans="";
                count = 0; 
            }
        }
        if (anss.empty()) {
            return "";
        } else {
            sort(anss.begin(), anss.end());
            return anss.back();
        }
    }
};
