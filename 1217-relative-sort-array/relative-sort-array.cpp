class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> buffer;
        for(int i=0;i<arr2.size();i++){
            vector<int>::iterator it = find(arr1.begin(),arr1.end(),arr2[i]);
            if(it!=arr1.end()){
                int count = std::count(arr1.begin(), arr1.end(), arr2[i]);
                for(int j=0;j<count;j++){
                    ans.push_back(arr2[i]);
                }
            }        
        }
        for(int j=0;j<arr1.size();j++){
            vector<int>::iterator it = find(arr2.begin(),arr2.end(),arr1[j]);
            if(it==arr2.end()){
                buffer.push_back(arr1[j]);
            }
        }
        sort(buffer.begin(),buffer.end());
        ans.insert(ans.end(),buffer.begin(),buffer.end());
        return ans;
    }
};