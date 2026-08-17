class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        if(nums.empty()||nums.size()==1) return false;

        sort(nums.begin(),nums.end());

        int i=1;
        int j=i-1;
        for(i=1;i<nums.size();i++){
            if(nums[i]==nums[j]){
                return true;
            }
            j=i;
        }



        return false;
        
    }
};