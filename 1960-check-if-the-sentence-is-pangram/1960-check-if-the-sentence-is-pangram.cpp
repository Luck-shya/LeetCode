class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> x;
        for(int i=0;i<sentence.size();i++){
            x.insert(sentence[i]);
        } 
        if(x.size()==26){
            return true;
        }
        return false;
    }
};