class Solution {
public:
    bool isValid(string s) {
        if(s.empty())
            return true;

        if(s.size() % 2 != 0)
            return false;
        
        stack<char> stack;
        for(int i=0; i< s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack.push(s[i]);
            }
        
        
            if(s[i] == ')')
            {
                if(!stack.empty() && stack.top() == '(')
                    stack.pop();
                else
                    return false;
            }

            if(s[i] == ']')
            {
                if(!stack.empty() && stack.top() == '[')
                    stack.pop();
                else
                    return false;
            }

            if(s[i] == '}')
            {
                if(!stack.empty() && stack.top() == '{')
                    stack.pop();
                else
                    return false;
            }
        }

        if(stack.empty())
            return true;
        return false;

    }

};
