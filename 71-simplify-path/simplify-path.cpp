class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        vector<string> tokens;
        string token;
    
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") {
                continue;
            } else if (token == "..") {
                if (!tokens.empty()) {
                    tokens.pop_back();
                }
            } else {
                tokens.push_back(token);
            }
        }
    
        string simplifiedPath = "";
        for(const string& dir : tokens) {
            simplifiedPath += "/" + dir;
        }
    
        return simplifiedPath.empty() ? "/" : simplifiedPath;
    }
};