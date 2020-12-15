class MinStack {
public:
    /** initialize your data structure here. */
        stack<int> data, help;
        MinStack() {
            help.push(INT_MAX);              //这句是为了让第一个push进来的数能够直接进入help
    }


    
    void push(int x) {
        data.push(x);                    //这里注意data和help里面的元素个数是一样的，help栈顶是当前data栈里的最小值
        help.push(min(help.top(), x));
    }
    
    void pop() {
            data.pop();
            help.pop();
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return help.top();
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
