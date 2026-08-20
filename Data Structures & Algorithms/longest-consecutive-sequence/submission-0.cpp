class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        
        sort(nums.begin(),nums.end());
        
        int max_count =0;
        int count=1;

        for(int i=nums.size()-1;i>0;i--){

            if(nums[i]==nums[i-1])continue;
            if(nums[i]!=nums[i-1]+1){
                max_count=max(max_count,count);
                count =1;
                continue;
            }

            count++;
            max_count=max(max_count,count);
        }

        return max(max_count,count);

        
    }
};
