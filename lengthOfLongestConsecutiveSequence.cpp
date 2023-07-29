#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(arr.size()==0){
        return 0;
    }
    sort(arr.begin(),arr.end());
    int ans=1,curr=1,prev=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==prev+1){
            curr++;
        }
        else if(arr[i]!=prev){
            curr=1;
        }
        prev=arr[i];
        ans=max(curr,ans);
    }
    return ans;
}
