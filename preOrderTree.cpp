#include <bits/stdc++.h> 
TreeNode<int>* solve(vector<int>& preOrder,int& i,int bound){

    if(i==preOrder.size() || preOrder[i]>bound) return NULL;

    TreeNode<int>* root =new TreeNode<int>(preOrder[i++]);

    root->left=solve(preOrder,i,root->data);

    root->right=solve(preOrder,i,bound);

    return root;

}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    int i=0,val=1e9;

     return solve(preOrder,i,val);
    // Write your code here.
}
