class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(char i : s){
            if(isalnum(i) && !isspace(i)){
                i = tolower(i);
                x = x+i;
            }
        }
        string y = x;
        reverse(x.begin(),x.end());
        if(y == x){
            return true;
        }
        else{
            return false;
        }
    }
};
