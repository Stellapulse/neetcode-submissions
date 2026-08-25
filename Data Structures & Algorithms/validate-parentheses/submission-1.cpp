class Solution {
public:
    bool isValid(string s) {

        stack<char> sta_ck;

        for(char ch:s){

            if(ch=='('||ch=='{'||ch=='[')sta_ck.push(ch);
            else{
                if(sta_ck.empty())return false;
                if((ch==')' && sta_ck.top() != '(')||
                   (ch=='}' && sta_ck.top() !='{')||
                   (ch==']' && sta_ck.top() !='[')
                )return false;

                sta_ck.pop();
            }
        }

        

        return sta_ck.empty();

        
    }
};
