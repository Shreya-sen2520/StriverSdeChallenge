#include <bits/stdc++.h> 

bool mirror(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2){
        if(root1==NULL && root2==NULL)return true;
        if(root1==NULL || root2==NULL)return false;
        return root1->data==root2->data && mirror(root1->left,root2->right) && mirror(root1->right,root2->left);

    }

bool isSymmetric(BinaryTreeNode<int>* root) {
	if(root==NULL)return true;
    return mirror(root->left,root->right);
}
