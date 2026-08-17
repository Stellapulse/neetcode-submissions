#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>map1;
       unordered_map<int,vector<int>>map2;

       for(int i=0;i<nums.size();i++){
        map1[nums[i]]++;
       }

       vector<int>max;
       for(auto &m:map1){
        max.push_back(m.second);
        map2[m.second].push_back(m.first);
       }
       vector<int>result;

       sort(max.begin(),max.end(),greater<int>());
       for (int i = 0; i < k && i < max.size() && result.size() < k; i++) {
           if(i>0 && max[i-1]==max[i]) continue;
           
            for (int val : map2[max[i]]) { 
                result.push_back(val);
                if(result.size()==k)break;
            }
        }

       return result;
    }
};
