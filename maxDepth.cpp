#include <bits/stdc++.h> 
int maxDepth(TreeNode<int> *root) {
     if(root==NULL) return -1;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}
