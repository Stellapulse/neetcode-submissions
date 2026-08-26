class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       //Brute force approach
       /* vector<int>result(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[i]<temperatures[j]){
                    result[i]= j-i;break;
                }
            }
        }
        */

        //MonoStack Approach

        stack<int>st;
        vector<int>result(temperatures.size(),0);

        int i=0;
        st.push(i);
        i++;
        while(i<temperatures.size()){

            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                result[st.top()]=(i-st.top());
                st.pop();
            }
            st.push(i);
            i++;

        }
        
        
        return result;
    }
};
