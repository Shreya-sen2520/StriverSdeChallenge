
bool isParentSum(Node *root){
   if(!root) return true;
   if(root->left and root->right)
   {
       if(root->data != root->left->data+root->right->data)
       return false;
   }
   else if(root->left and root->data!=root->left->data)
   return false;
   else if(root->right and root->data!=root->right->data)
   return false;
   return (isParentSum(root->left)&isParentSum(root->right));
}
