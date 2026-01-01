#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    if(p.size()<=1) return p;
    vector<int>v;
    int i=0;
    do{
        i++;
        if(i==2){
            for(auto x:p){
                v.push_back(x);
            }
            break;
        }
    }while(nextPermutation(p.begin(),p.end()));
    if(v.size()==0){
        sort(p.begin(),p.end());
        return p;
    }
    return v;
}
