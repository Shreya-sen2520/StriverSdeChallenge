#include<bits/stdc++.h>

int subarraysWithSumK(vector < int > a, int b) {

    int xr =0, cnt=0;

    unordered_map<int,int> mpp;

    mpp[xr]++ ;// for {0,1}

    for(int i=0;i<a.size();i++){

        xr = xr ^ a[i];

        int x = xr ^ b;

        cnt += mpp[x];

        mpp[xr]++;

    }

    return cnt;

}
