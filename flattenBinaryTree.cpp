#include <bits/stdc++.h> 
void helper(TreeNode<int>*root,TreeNode<int>*&prev)

{

    if(!root)return;

    helper(root->right,prev);

    helper(root->left,prev);

    root->right=prev;

    root->left=NULL;

    prev=root;

}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    TreeNode<int>*prev=NULL;

    helper(root,prev);

    return prev;
}
