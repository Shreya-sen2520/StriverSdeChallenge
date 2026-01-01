#include<bits/stdc++.h>

vector<int> majorityElement(vector<int> v) {

    // Write your code here

    int cnt1=0; int cnt2 =0;

    int el1 = INT_MIN; int el2 = INT_MIN;

    int n = v.size();

    vector<int> ans;

    for(int i=0;i<n;i++){

 

        if(cnt1 == 0 && v[i]!=el2){

            cnt1 = 1;

            el1 = v[i];

        }

        else if(cnt2 == 0 && v[i]!=el1){

            cnt2 = 1;

            el2 = v[i];

        }

        else if(el1 == v[i]) cnt1++;

        else if(el2 == v[i]) cnt2++;

        else{

            cnt1--;

            cnt2--;

        }

    }

 

    cnt1=0;cnt2=0;

    for(int i=0;i<n;i++){

        if(el1 == v[i])cnt1++;

        if(el2 == v[i])cnt2++;

    }

 

    int mini = (int)(n/3)+1;

    if(cnt1>=mini) ans.push_back(el1);

    if(cnt2>=mini) ans.push_back(el2);

 

    return ans;

}
