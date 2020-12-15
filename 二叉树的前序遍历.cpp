/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& data)               //前序遍历，创建无返回值函数
    {
        if(root == nullptr)
            return;
        data.push_back(root->val);                         //参考算法与数据结构书籍，先打印节点，再遍历左子树，最后遍历右子树
        preorder(root->left,data);
        preorder(root->right, data);
    }



    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> data;
        preorder(root,data);                     //调用preorder函数
        return data;      
    }
};
