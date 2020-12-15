class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stack;
        vector<int> output;
        output.resize(nums1.size(),-1);
        int count = 0;
        for(int i=0; i<nums1.size(); i++)
        {
            stack.push(nums1[i]);
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums2[j] == stack.top())
                {
                    for(int k=j+1; k<nums2.size();k++)
                    {
                        if(nums2[k] > nums2[j])
                        {
                            output[i] = nums2[k];
                            break;
                        }
                    }
                    break;
                }

            }
        }
        return output;
    }
};
