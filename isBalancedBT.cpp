#include <bits/stdc++.h> 

int height(BinaryTreeNode<int>* root){

    if(root == NULL){

        return 0;

    }

    return max(height(root->left),height(root->right))+1;

}

bool isBalancedBT(BinaryTreeNode<int>* root) {

    // Write your code here.

    if(root == NULL){

        return true;

    }

    if(isBalancedBT(root->left) && isBalancedBT(root->right)){

        if(abs(height(root->left) - height(root->right)) <=1 ){

            return true;

        }

    }

    

    return false;

}
