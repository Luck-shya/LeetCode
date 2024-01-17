class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count=1;
        vector<int> counts;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]){
                count++;
            }
            else{
                counts.push_back(count);
                count=1;
            }
        }
        counts.push_back(count);
        set<int> c(counts.begin(),counts.end());
        if(counts.size()==c.size()){
            return true;
        }
        return false;
    }
};