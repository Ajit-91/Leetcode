class Solution {
    bool isVowel(char c){
      if(c == 'a' || c == 'A'){
          return true;
      }else if(c == 'e' || c == 'E'){
          return true;
      }else if(c == 'i' || c == 'I'){
          return true;
      }else if(c == 'o' || c == 'O'){
          return true;
      }else if(c == 'u' || c == 'U'){
          return true;
      }
    
     return false;
    }
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }else if(!isVowel(s[i])){
                while(i < j && !isVowel(s[i])) i++;
            }else if(!isVowel(s[j])){
                while(i < j && !isVowel(s[j])) j--;
            }
        }
        return s;
    }
};