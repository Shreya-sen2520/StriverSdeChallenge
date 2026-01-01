#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
    unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])) map[nums[i]]++;
            else map[nums[i]]=1;
        }
    vector<vector<int>> buckets(n+1);
        
       for (auto i = map.begin(); i != map.end(); i++){
       buckets[i->second].push_back(i->first);
    }
        vector<int> ans;
        
        for(int i=n;i>=0;i--){                          // BUCKETS USED
            if (ans.size() >= k) {
                break;
            }
            if (!buckets[i].empty()) {
                ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());    //VECTOR INSERT
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
}
