class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        } 
        int leftnode_count = countNodes(root->left);
        int rightnode_count = countNodes(root->right);
        return leftnode_count + rightnode_count + 1;
    }
};