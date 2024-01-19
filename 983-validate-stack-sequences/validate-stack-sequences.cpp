class Solution {
public:
      bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;  
        int j = 0;  
        stack<int> s;  
        for (int num : pushed) {
            s.push(num);
            while (!s.empty() && s.top() == popped[j]) {
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};