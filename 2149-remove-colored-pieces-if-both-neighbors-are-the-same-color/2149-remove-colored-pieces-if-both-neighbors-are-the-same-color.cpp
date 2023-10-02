class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0;
        int bob=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A'){
                if(colors[i-1]=='A' && colors[i+1]=='A'){
                    alice++;
                    // colors.erase(i,1);
                }
            }
            else{
                if(colors[i-1]=='B' && colors[i+1]=='B'){
                    bob++;
                    // colors.erase(i,1);
                }
            }
        }
        if(alice>bob){
            return true;
        }
        return false;
    }
};