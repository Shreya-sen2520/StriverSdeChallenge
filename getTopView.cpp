#include <bits/stdc++.h> 
vector<int> getTopView(TreeNode<int> *root) {
    vector<int>ans;    // To store ans

   if(!root)

   return ans;

 

   map<int,int> TN;       

                                       

 

   queue<pair<TreeNode<int> *,int>> q;    

 

   q.push({root,0});

 

   while(!q.empty()){

       auto temp = q.front();

       q.pop();

        TreeNode<int> *N = temp.first;

        int hd = temp.second;

 

        if(TN.find(hd)==TN.end()){

            TN[hd] = N->val;

        }

 

        if(N->left){

          q.push({N->left, hd - 1});

        }

         if(N->right){

           q.push({N->right, hd + 1});

        }

   }

 

   for(auto i:TN)

   ans.push_back(i.second);

 

return ans;
}
