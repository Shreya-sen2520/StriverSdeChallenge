#include <bits/stdc++.h> 

void preorder(BinaryTreeNode < int > * node, string s, vector<string> &ans){
    if(!node) return;
    if(!node->left and !node->right) ans.push_back(s+to_string(node->data));
    preorder(node->left, s+to_string(node->data)+" ", ans);
    preorder(node->right, s+to_string(node->data)+" ", ans);
}

vector < string > allRootToLeaf(BinaryTreeNode < int > * root) {
    vector<string> ans;
    preorder(root, "", ans);
    return ans;
}
