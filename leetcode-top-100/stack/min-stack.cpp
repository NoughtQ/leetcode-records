// link: https://leetcode.cn/problems/min-stack

// Method: Auxiliary Stack
// Time Complexity: O(1)
// Space Complexity: O(n)

class MinStack {
private:
    vector<int> elems;
    vector<int> min_vals;
    int size;

public:
    MinStack(): size(0) {
        elems.clear();
        min_vals.clear();
    }
    
    void push(int val) {
        elems.push_back(val);
        if (!size || min_vals.back() > val) {
            min_vals.push_back(val);
        } else {
            min_vals.push_back(min_vals.back());
        }
        ++size;
    }
    
    void pop() {
        if (size) {
            elems.pop_back();
            min_vals.pop_back();
            --size;
        } else {
            cout << "The stack is empty!" << endl;
        }
    }
    
    int top() {
        if (size) {
            return elems.back();
        }
        return 0;
    }
    
    int getMin() {
        if (size) {
            return min_vals.back();
        }
        return INT_MAX;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */