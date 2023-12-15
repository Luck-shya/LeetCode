class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> dest;
        for(int i=0;i<paths.size();i++){
            dest.insert(paths[i][0]);
        }
        for(int i=0;i<paths.size();i++){
            string city = paths[i][1];
            if(dest.find(city)==dest.end()){
                return city;
            }
        }
        return "";
    }
};