#include <bits/stdc++.h> 

void helper(BinaryTreeNode<int>*root,int k,unordered_map<int,int>&umap,bool &ans){

    if(root==NULL)return;

    int check=k-root->data;

    if(umap.find(k-root->data)!=umap.end()){

        ans=true;

        return;

    }

    umap[root->data]=1;

    helper(root->left,k,umap,ans);

    helper(root->right,k,umap,ans);

 

}

bool pairSumBst(BinaryTreeNode<int> *root, int k)

{

    unordered_map<int,int>umap;

    bool ans=false;

    helper(root,k,umap,ans);

    return ans;

}
