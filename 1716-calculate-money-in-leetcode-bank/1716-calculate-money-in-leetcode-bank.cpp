class Solution {
public:
    int totalMoney(int n) {
       int total = 0;
       vector<int> ans;
       ans.push_back(1);
       for(int i=1;i<n;i++){
           if(i%7==0 && i>=7){
               ans.push_back(ans[i-7]+1);
            }
            else{
                ans.push_back(ans[i-1]+1);
            }
        } 
        for(int it:ans){
            total+=it;
        }
        return total;
    }
};