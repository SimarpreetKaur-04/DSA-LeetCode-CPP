class Solution {
public:
 
    void recursivePostorder(TreeNode* root, vector<int>& ans) {
        if(root == nullptr) {
            return;
        }

        // left right root
        recursivePostorder(root->left,ans);
        recursivePostorder(root->right,ans);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        recursivePostorder(root,ans);
        return ans;
    }
};