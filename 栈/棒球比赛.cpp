class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> data;
        stack<string> help;
        int end_num = 0, sum_num = 0, sum = 0;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i] == "C")
            {
                data.pop_back();
            }
            else if(ops[i] == "D")
            {
                end_num = data[data.size()-1];
                end_num *= 2;
                data.push_back(end_num);
            }
            else if(ops[i] == "+")
            {
                sum_num = data[data.size()-1] + data[data.size()-2];
                data.push_back(sum_num);
            }
            else
            {
                data.push_back(atoi(ops[i].c_str()));
            }
                
        }

        for(int j=0; j<data.size(); j++)
            sum += data[j];

        return sum;
    }
};
