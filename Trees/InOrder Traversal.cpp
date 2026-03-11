class Solution {
public:
    
    void recursiveInorder(TreeNode* root, vector<int>& ans) {
        if(root == nullptr) {
            return;
        }

        // left root right
        recursiveInorder(root->left,ans);
        ans.push_back(root->val);
        recursiveInorder(root->right,ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recursiveInorder(root,ans);
        return ans;
    }
};