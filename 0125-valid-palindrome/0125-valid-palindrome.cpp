class Solution {
public:
    bool isPalindrome(string s) {
        string anotherS;
        for(char c : s){
            int ascii = int(c);
            // filtering alphanumeric characters
            if((ascii >= 48 && ascii <= 57) || 
               (ascii >= 65 && ascii <= 90) || 
               (ascii >= 97 && ascii <= 122)
              ){
                // converting Uppercase into lower case
                if(ascii >= 65 && ascii <= 90){
                    c = c | 32;
                }
                anotherS.push_back(c);
            }
        }
     
        // checking for pallindrome
        int len = anotherS.size();
        for(int i = 0; i < len/2; i++){
            if(anotherS[i] != anotherS[len-1-i]){
                return false;
            }
        }
        return true;
    }
};