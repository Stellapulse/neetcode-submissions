class Solution {
public:
    bool isPalindrome(string s) {

        string c;

        for(char ch : s){

            if(isalnum(ch)){
                c.push_back(tolower(ch));
            }

        }
        int left=0;
        int right = c.length()-1;

        while(left<right){
            if(c[left]!=c[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};
