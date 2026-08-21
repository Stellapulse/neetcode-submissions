class Solution {
public:
//solution with O(n) complexity 
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;

        unordered_set<int>s(nums.begin(),nums.end());
        int max_count =0;

        for(int num :s){
            if(!s.count(num-1)){
                int count =1;
                int cur_num = num;

                while(s.count(cur_num+1)){
                    count++;
                    cur_num++;
                }

                max_count = max(max_count,count);
            }
        }

        return max_count;

        
    }
};
