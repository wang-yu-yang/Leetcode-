class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ss;
        string s1 = "Push";
        string s2 = "Pop";
        int num=1;
        for(int i=0; i<target.size(); i++)
        {

            while(num < target[i])             //当下一个push的值小于traget时，需要先push再pop
            {
                ss.push_back(s1);
                ss.push_back(s2);
                num += 1;
            }
            if(target[i] == num)             //当下一个push的值等于traget时，只需要push
            {
                ss.push_back(s1);
                num += 1;
            }
        }
        return ss;    
    }
};
