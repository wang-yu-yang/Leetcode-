class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    queue<int> q;
    queue<int> help;            //辅助队列
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);

    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int num = q.size();
        int first = q.back();          //pop需要返回q队列最新来的数据，使用q.back()
        queue<int> temp;
        for(int i=0; i<num-1; i++)     //将q队列里的数据除最新进入的那个外，其他的压入
        {
            help.push(q.front());
            q.pop();
        }
        q.pop();       //这里是为了清空队列q，为以后q和help的交换留下伏笔
        temp = help;
        help = q;
        q = temp;
        return first;
    }
    
    /** Get the top element. */
    int top() {
        return q.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
