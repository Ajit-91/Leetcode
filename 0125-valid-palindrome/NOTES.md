 # Method 1 : 
* Filter the alphanumeric characters from given string

			(ascii >= 48 && ascii <= 57)  // Numerals 0-9
			(ascii >= 65 && ascii <= 90) // upercase A-Z
			(ascii >= 97 && ascii <= 122) // lowercase a-z

* Check the newly obtained string if it is pallindrome or not

```
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
```

# Method 2 (Optimal) :
* Skip non alphanumeric chars from sttart and from end
* compare first alphaNum char with last alphaNum char... similarly 2nd alphaNum with 2nd last alphaNum

```
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
```
