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
        map2[m.second].push_back(m.first);
       }
       vector<int>result;

       
       for (int freq = nums.size();freq>=1&& result.size() < k;freq--) {
          if(map2.find(freq) != map2.end()){
                for (int val : map2[freq]) {
                    result.push_back(val);
                    if (result.size() == k) break;
                }
            }
        }

       return result;
    }
};
