#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n=start.size();
    pair<int,int>a[n+1];int i;
    for(i=0;i<n;i++)
    {
        a[i].first=end[i];
        a[i].second=i;
    }
    sort(a,a+n);
    int time=a[0].first;
    vector<int>m;
    m.push_back(a[0].second+1);
    for (i = 1; i < n; i++) {
        if (start[a[i].second] > time) {
           
            m.push_back(a[i].second + 1);

            time = a[i].first;
        }
    }
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
}
