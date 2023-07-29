#include <bits/stdc++.h> 

vector<int> zigzagTreeTraversal(TreeNode<int> *root)
{
    vector<int>ans;

        if(root==NULL)

            return ans;

        queue<TreeNode<int>*>q;

        q.push(root);

        bool leftRight=true;

        while(!q.empty())

        {

            int size=q.size();

          vector<int>v(size);

     //Level Process

 

            for(int i=0;i<size;i++)

            {

                TreeNode<int>* frontNode=q.front();

                q.pop();

    // Normal insert OR reverse insert

                int index=leftRight ? i:size-i-1;

                v[index]=frontNode->data;

                if(frontNode->left)

                    q.push(frontNode->left);

                if(frontNode->right)

                    q.push(frontNode->right);

            }

   		leftRight =! leftRight;

           for(auto i:v)

               ans.push_back(i); 

            

        }

        return ans;
}
