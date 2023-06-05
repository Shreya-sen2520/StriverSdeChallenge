#include <bits/stdc++.h> 
vector<long long int>generateR(int row){
    long long ans=1;
    vector<long long int>ansR;
    ansR.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansR.push_back(ans);
    }
    return ansR;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  for(int i=1;i<=n;i++){
      ans.push_back(generateR(i));
    }
    return ans;
}

