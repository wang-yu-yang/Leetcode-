class Solution {
public:
    string makeGood(string s) {
        stack<char> data;
        string res;
        if(s.empty())                 //空字符串也是有效字符串
            return s;
        
        for(int i=0; i<s.size(); i++)  
        {
            res += s[i];
            if(data.empty())           //主要为了初始化
                data.push(s[i]);
            else
            {
                if(s[i] == data.top() + 32 || s[i] == data.top() - 32)
                {
                    res.pop_back();      //这里弹出两次是为了把大小写字母都弹出
                    res.pop_back();
                    data.pop();         //此时stack的栈顶元素该换了
                }
                else
                    data.push(s[i]);    //如果大小写字母没挨着，就可以压入stack
            }
               
        }
        return res;
    }
};
