class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        std::unordered_map<int, int> orderMap;

        for (int i = 0; i < arr2.size(); ++i) {
            orderMap[arr2[i]] = i;
        }
        std::sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            if (orderMap.find(a) != orderMap.end() && orderMap.find(b) != orderMap.end()) {
                return orderMap[a] < orderMap[b];
            } else if (orderMap.find(a) != orderMap.end()) {
                return true;
            } else if (orderMap.find(b) != orderMap.end()) {
                return false;
            } else {
                return a < b;
            }
        });

        return arr1;
    }
};