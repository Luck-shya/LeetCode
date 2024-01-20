class CustomStack {
private:
    stack<int> s;
    int maxSize;

public:
    CustomStack(int maxSize) : maxSize(maxSize) {
        // Constructor logic here, if any
    }

    void push(int x) {
        if (s.size() < maxSize) {
            s.push(x);
        }
    }

    int pop() {
        if (s.empty()) {
            return -1;
        }
        int result = s.top();
        s.pop();
        return result;
    }

    void increment(int k, int val) {
        int n = s.size();
        vector<int> temp;
        
        while (n > k) {
            temp.push_back(s.top());
            s.pop();
            n--;
        }

        while (!s.empty()) {
            temp.push_back(s.top() + val);
            s.pop();
        }

        for (int i = temp.size() - 1; i >= 0; i--) {
            s.push(temp[i]);
        }
    }
};