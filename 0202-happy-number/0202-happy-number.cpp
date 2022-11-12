
class Solution {
    // function to find sum of square of digits
    int digitSqSum(int n){
        int ans = 0;
        while(n){
            int digit = n % 10;
            ans += digit*digit;
            n /= 10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        // map to store all states of n
        unordered_map<int, bool> states;
        states[n] = true;
        
        // loop till n becomes 1
        while(n != 1){
            n = digitSqSum(n);
            // if n becomes same as one of the past states
            // this means cycle is repeated
            // hence return false
            if(states[n]){
                return false;
            }
            // save the current state of n
            states[n] = true;
        }
        return true;
    }
};