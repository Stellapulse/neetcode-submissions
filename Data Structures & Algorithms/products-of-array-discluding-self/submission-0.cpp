class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multiplication=1;
        int zeroCount = 0;
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                idx=i;
                zeroCount++;
                continue;
            }
            multiplication*=nums[i];
        }
        vector<int>product(nums.size(),0);
        if(zeroCount>1) return product;

        if(zeroCount==1){
            
            product[idx]=multiplication;
            return product;
        }
        
        for(int i=0;i<nums.size();i++){
            product[i]=multiplication/nums[i];
        }
        
        return product;
        
    }
};
