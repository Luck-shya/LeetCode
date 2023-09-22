class Solution {
public:
    string reformatDate(string date) {
        string ans;
        for(int i=date.size()-4;i<date.size();i++){
            ans+=date[i];
        }
        ans+='-';
        string month[12] ={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        string k = date.substr(date.size()-8,3);
        for(int j=0;j<12;j++){
            if(month[j]==k){
                if(j<9){
                    ans+='0';
                }
                ans+=to_string(j+1);
                break;
            }
        }
        ans+='-';
        int m= stoi(date.substr(0,2));
        string g;
        if(m<10){
            g='0'+ to_string(m);
        }
        else{
            g=to_string(m);
        }

        ans+=g;
        return ans;
    }
};