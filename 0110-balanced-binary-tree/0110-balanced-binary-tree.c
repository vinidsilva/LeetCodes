/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int altura(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }

    int esq = altura(root->left);
    if(esq == -1) return -1;

    int dir = altura(root->right);
    if(dir == -1) return -1;

    if(abs(esq - dir) > 1) return -1;

    return (esq > dir ? esq:dir) + 1;
}


bool isBalanced(struct TreeNode* root) {
    return altura(root) != -1;
}