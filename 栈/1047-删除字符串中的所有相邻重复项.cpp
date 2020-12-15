class Solution {
public:
    string removeDuplicates(string S) {       //整体就是用string模拟stack,实现栈的功能
        stack<char> stack;
        string res = "";
        for(int i=0; i<S.size(); i++)
        {
            if(res.size() == 0)                //这是判断开始有重复项已经消除之后导致string为空
                res.push_back(S[i]);
            else
            {
                if(S[i] == res.back())        //当string里的当前字符和res最后的字符相同时弹出
                    res.pop_back();
                else
                    res.push_back(S[i]);      //不相等就再压入
            }       
        }
        return res;
    }
};
