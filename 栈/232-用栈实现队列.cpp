class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    stack<int> data;
    stack<int> help;
    /** Push element x to the back of queue. */
    void push(int x) {
        data.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int first;
        stack<int> temp;
        int num1 = data.size();
        for(int i=0; i< num1; i++)                  //这里是将data栈保存的数据逐个压出放入help栈
        {
            help.push(data.top());                
            data.pop();
        }
        first = help.top();            //返回的是最先进入data栈的数据
        help.pop();
        int num2 = help.size();
        for(int j=0; j< num2; j++)        //这块是将help栈的数据再压回data栈，只是最先进入data栈的数据被删除了
        {
            data.push(help.top());
            help.pop();
        }
        return first;
    }
    
    /** Get the front element. */
    int peek() {
        int top_num;
        int num1 = data.size();
        stack<int> temp;
        for(int i=0; i<num1; i++)
        {
            help.push(data.top());
            data.pop();
        }
        top_num = help.top();               //这块跟上面的差不多，少了一个把最先数据压出栈的操作
        int num2 = help.size();
        for(int j=0; j<num2; j++)
        {
            data.push(help.top());
            help.pop();
        }
        return top_num;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return data.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
