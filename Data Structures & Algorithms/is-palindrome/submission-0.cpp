class Solution {

public:

    bool isPalindrome(string s) {

        bool ans = true;

        int st = 0, e = s.size() - 1;

        while(st < e){

            while(st < e && !isalnum(s[st]))
                st++;

            while(st < e && !isalnum(s[e]))
                e--;

            if(tolower(s[st]) != tolower(s[e])){

                ans = false;
                break;

            }

            st++;
            e--;
        }

        return ans;
    }
};