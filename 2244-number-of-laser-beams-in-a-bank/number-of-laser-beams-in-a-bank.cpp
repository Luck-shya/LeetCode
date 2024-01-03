class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ones;
        int count=0;
        int prev = 0;
        int ans=0;
        for(auto s:bank){
            count=0;
            for(auto ch : s){
                if(ch=='1'){
                    count++;
                }
            }
            if(count!=0){
                ans+=(prev*count);
                prev=count;
            }

        }
        return ans;
    }
};