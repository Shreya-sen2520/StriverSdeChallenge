#include<bits/stdc++.h>


 string commonPrefix(vector<string>& arr,int n){
 
string ans=arr[0];
 for(int i=1;i<arr.size();i++)
{
for(int j=0;j<arr[i].size();j++) 
{
if(ans[j]!=arr[i][j])
{
ans=arr[i].substr(0,j);
break;
}
}
}
if(ans.length()==0)return "-1";
return ans;

}
