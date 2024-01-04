class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        stack<string> tokens;
        string token;
    
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") {
                continue;
            } else if (token == "..") {
                if (!tokens.empty()) {
                    tokens.pop();
                }
            } else {
                tokens.push(token);
            }
        }
    
        string simplifiedPath = "";
        while(!tokens.empty()) {
            simplifiedPath = "/" + tokens.top() +simplifiedPath;
            tokens.pop();
        }
    
        return simplifiedPath.empty() ? "/" : simplifiedPath;
    }
};