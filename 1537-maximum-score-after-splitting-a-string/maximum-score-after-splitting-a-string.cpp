class Solution {
public:
    int maxScore(string s) {
        vector<int> zero;
        vector<int> one;
        for(int i = 1 ;i<s.size();i++){
            string left = s.substr(0,i);
            string right = s.substr(i,s.size()-1);
            int zeros=0,ones=0;
            for(int j=0;j<left.size();j++){
                if(left[j]=='0'){
                    zeros++;
                }
            }
            zero.push_back(zeros);
            for(int j=0;j<right.size();j++){
                if(right[j]=='1'){
                    ones++;
                }
            }
            one.push_back(ones);
        }
        int max= 0 ;
        for(int k=0;k<one.size();k++){
            int temp = zero[k]+one[k];
            if(max<temp){
                max=temp;
            }
        }
        return max;
    }
};