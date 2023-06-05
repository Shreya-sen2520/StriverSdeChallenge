#include <bits/stdc++.h> 
int maximumProfit(vector<int> &p){
    int maxp=0;
    int minpri=INT_MAX;
    int n=p.size();
    for (int i = 0; i < n; i++) {
      minpri = min(minpri, p[i]);
      maxp = max(maxp, p[i] - minpri);
    }
    return maxp;
}
