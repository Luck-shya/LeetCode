class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        string k;
        for(int s=0;s<1;s++){
            if(res[0]!=0){
                k+=to_string(res[s]);
            }
        }
        for(int s=1;s<res.size();s++){
            k+=to_string(res[s]);
        }
        return k;

        
    }
};