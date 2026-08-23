class Solution {
public:
    int maxArea(vector<int>& heights) {

        int i=0;
        int j=heights.size()-1;
        int max_amt=0;

        while(i<j){
            int area = (j-i)*min(heights[j],heights[i]);
            max_amt=max(max_amt,area);
            if(heights[j]>heights[i])i++;
            else j--;
        }

        return max_amt;
        
    }
};
