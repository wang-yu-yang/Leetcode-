class Solution {
public:
    string removeOuterParentheses(string S) {
        string temp ,res;
        int left = 0, right = 0, count = 0;
        for(int i=0; i<S.size(); i++)
        {
            temp += S[i];       
            if(S[i] == '(')             //原语应该是count为0，即左括号等于右括号数
                count++;
            else
                count--;
            
            if(count == 0)
            {
                res += temp.substr(1, temp.size()- 2);
                temp = "";
            }
        }
        return res;
    }
};
