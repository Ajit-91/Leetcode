class Solution {
    int reverseNum(int num){
        int ans = 0;
        while(num > 0){
            ans = ans* 10 + (num % 10);
            num /= 10;
        }
        return ans;
    }
    string toString(int num){
        int n = reverseNum(num);
        string ans;
        while(n > 0){
            ans.push_back('0' + (n % 10));
            n /= 10;
        }
        return ans;
    }
public:
    int maximum69Number (int num) {
        string n = toString(num);
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