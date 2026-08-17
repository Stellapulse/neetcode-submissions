class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.empty()) return {};

        vector<vector<string>> str;
        
        
        unordered_map<string,vector<string>>mp;

        for(auto &s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);  
        }

       for(auto &s:mp){
        str.push_back(s.second);
       }


     return str;

        
    }
};
