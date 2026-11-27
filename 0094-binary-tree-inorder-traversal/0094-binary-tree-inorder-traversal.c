/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void percorrer(struct TreeNode* root, int* result, int* index){
    if(root == NULL){
        return;
    }

    percorrer(root->left, result, index);
    result[(*index)++] = root->val;
    percorrer(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100*sizeof(int));
    *returnSize = 0;

    percorrer(root, result, returnSize);
    return result;
}