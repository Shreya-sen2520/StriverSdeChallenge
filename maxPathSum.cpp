#include<bits/stdc++.h>
int recur(TreeNode<int>* root, int &result) {
    if(root == NULL) {
        return 0;
    }

    int left = recur(root->left, result);
    int right = recur(root->right, result);

    int max1 = max(max(left, right) + root->data, root->data);
    int max2 = max(max1, left + right + root->data);

    result = max(max2, result);

    return max1;
}

int maxPathSum(TreeNode<int> *root)
{
    int result = INT_MIN;
    recur(root, result);

    return result;
}
