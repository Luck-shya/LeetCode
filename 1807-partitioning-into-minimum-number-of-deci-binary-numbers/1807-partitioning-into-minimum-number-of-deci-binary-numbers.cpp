class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int b = int(n[i]) - 48;
            if(ans<b){
                ans=b;
            }
            
        }
        return ans;
    }
};