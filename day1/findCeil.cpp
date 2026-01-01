#include <bits/stdc++.h> 

BinaryTreeNode<int>* solve(BinaryTreeNode<int>* node, int x, int& ceil) {

    if (node == NULL)

        return NULL;

 

    if (node->data == x) {

        ceil = x;

        return node;

    }

 

    if (node->data > x) {

        BinaryTreeNode<int>* leftResult = solve(node->left, x, ceil);

        if (leftResult != NULL) return leftResult;

        ceil = node->data;

        return node;

    }

 

    return solve(node->right, x, ceil);

}

 

int findCeil(BinaryTreeNode<int>* root, int x) {

    int ceil = -1;

    BinaryTreeNode<int>* result = solve(root, x, ceil);

    if (result != NULL)

        return result->data;

    return ceil;

}
