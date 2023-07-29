#include <bits/stdc++.h> 
void preorder(TreeNode *root, vector<int> &ans) {

    if(!root) return;

    ans.push_back(root->data);

    preorder(root->left, ans);


    preorder(root->right, ans);

}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    preorder(root, ans);
    return ans;
}
