class Solution {
public:
    bool isPalindrome(string s) {
        // take left and right pointers i and j
        int i = 0; int j = s.size()-1;
        while(i < j){
            // skip non alphanumeric chars from left
            while((!isalnum(s[i])) && i < j) i++;
            // skip non alphanumeric chars from right
            while((!isalnum(s[j])) && i < j) j--;
            // Now both left and right arealphanumeric
            // So, after case conversion they're not equal => not pallindrome
            if(toupper(s[i]) != toupper(s[j])) return false;
            i++; 
            j--;
        }
        return true;
    }
};