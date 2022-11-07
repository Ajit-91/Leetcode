class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
        int ans = 0;
        for(char &c : n){
            if(c == '6'){
                c = '9';
                break;
            }
        }
        for(char c : n){
            ans = ans*10 + c-'0';
        }
        return ans;
    }
};