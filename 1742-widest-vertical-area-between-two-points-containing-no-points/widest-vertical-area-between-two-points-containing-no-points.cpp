class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xaxis;
        for(auto point : points){
            xaxis.push_back(point[0]);
        }
        sort(xaxis.begin(),xaxis.end());
        int temp=0;
        for(int i=1;i<xaxis.size();i++){
            int diff = xaxis[i]-xaxis[i-1];
            if(diff>temp){
                temp=diff;
            }
        }
        return temp;
    }
};