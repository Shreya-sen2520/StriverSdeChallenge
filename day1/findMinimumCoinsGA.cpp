#include <bits/stdc++.h> 
int findMinimumCoins(int a) 
{
    vector<int> cur = {1,2,5,10,20,50,100,500,1000};
    int coins=0;int i=8;
    while(a && i>=0)//76 ,26,6,1
    {
        if(a<cur[i])
        {
            i--;
            continue;
        }
        coins++;//1,2,3,4
        a-=cur[i];//26,6,1
    }
    return coins;
}

