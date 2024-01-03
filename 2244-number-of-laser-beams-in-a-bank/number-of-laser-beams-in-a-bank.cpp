class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> ones;
        int count=0;
        for(auto s:bank){
            count=0;
            for(auto ch : s){
                if(ch=='1'){
                    count++;
                }
            }
            if(count>0){
                ones.push_back(count);
            }

        }
        int ans=0;
        for(int i=1;i<ones.size();i++){
            if(ones[i]>0){
                ans+=(ones[i-1]*ones[i]);
            }
        }
        return ans;
    }
};