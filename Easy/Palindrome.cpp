class Solution {
public:
    bool isPalindrome(int x) {
        string palindrome;
        int i,len;
        if(x<0) return false;

        palindrome = std::to_string(x);
        len = palindrome.length();
        for(i=1;i<len;i++){
            if(palindrome[i-1] != palindrome[len-i]) return false;
        }

        return true;

    }
};
