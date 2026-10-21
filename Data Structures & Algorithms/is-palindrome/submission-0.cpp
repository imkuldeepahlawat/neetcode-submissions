class Solution {
public:
    bool isPalindrome(string s) {
        string cmp = "";
        for(auto ch:s){
            if(ch == ' '|| isalnum(ch) == false)continue;
            cmp+= tolower(ch);
        }
        string cmp2 = cmp;
        reverse(cmp2.begin(),cmp2.end());
        return cmp == cmp2;
    }
};
