#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return ((double) a.second / a.first) > ((double) b.second / b.first);
    });
    double maxp=0.0;
    int currW=0;
    for(auto p:items){
        if(p.first+currW<=w){
            currW+=p.first;
            maxp+=p.second;
        }else{
            maxp+=double((double)p.second*(w-currW))/p.first;
            break;
        }
    }
    return maxp;
}
