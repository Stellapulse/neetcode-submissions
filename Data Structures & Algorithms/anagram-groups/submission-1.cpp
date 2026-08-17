class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.empty()) return {};
        vector<string>sorted_vec=strs;

        for(int i=0;i<sorted_vec.size();i++){
            sort(sorted_vec[i].begin(),sorted_vec[i].end());
        }

        unordered_map<string,vector<int>>mp;
        vector<vector<string>>str;

        for(int i=0;i<sorted_vec.size();i++){
            mp[sorted_vec[i]].push_back(i);
        }

        for(auto &[key,vec]:mp){
            vector<string>temp;
            for(auto num:vec){
                temp.push_back(strs[num]);
            }
             str.push_back(temp);
        }
        
        return str;
      
    }
    
};
