class Solution {
public:
    bool isPathCrossing(string path) {
        int n = 0, e = 0;
        unordered_set<string> visited;
        string currentPosition = "0,0";
        visited.insert(currentPosition);

        for (char ch : path) {
            if (ch == 'N') {
                n++;
            } else if (ch == 'S') {
                n--;
            } else if (ch == 'E') {
                e++;
            } else {
                e--;
            }

            currentPosition = to_string(n) + "," + to_string(e);

            if (visited.find(currentPosition) != visited.end()) {
                return true; 
            } else {
                visited.insert(currentPosition);
            }
        }

        return false; 
    }
};