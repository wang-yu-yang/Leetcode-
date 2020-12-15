class CustomStack {
public:
    CustomStack(int maxSize) {
        maxsize = maxSize;
    }
    int maxsize;
    stack<int> data;
    stack<int> help;
    void push(int x) {
        if(data.size() != maxsize)
            data.push(x);
    }
    
    int pop() {
        int top;
        if(data.empty())
            return -1;
        else
        {
            top = data.top();
            data.pop();
            return top;
        }
    }
    
    void increment(int k, int val) {
        int num1=0, num2=0;
        int num3=0, num4=0; 
        if(data.size() < k)
        {
            num1 = data.size();
            for(int i=0; i<num1; i++)
            {
                help.push(data.top()+val);
                data.pop(); 
            }
            num2 = help.size();
            for(int j=0; j<num2; j++)
            {
                data.push(help.top());
                help.pop();
            }
        }
        else
        {
            num3 = data.size();
            for(int i=0; i<num3; i++)
            {
                help.push(data.top());
                data.pop();
            }
            num4 = help.size();
            for(int j=0; j<num4; j++)
            {
                if(j < k)
                    data.push(help.top()+val);
                else
                    data.push(help.top());
                help.pop();

            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
