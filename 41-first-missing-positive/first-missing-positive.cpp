class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> new_ans;
        for(auto num : nums){
            if(num > 0){                
                new_ans.push_back(num);
            }
        }
        sort(new_ans.begin(), new_ans.end());
        
        if(new_ans.empty() || new_ans[0] != 1) {
            return 1;
        }

        for(int i = 1; i < new_ans.size(); ++i){
            if(new_ans[i] != new_ans[i - 1] && new_ans[i] - new_ans[i - 1] > 1) {
                return new_ans[i - 1] + 1;
            }
        }
        return new_ans.back() + 1;
    }
};
