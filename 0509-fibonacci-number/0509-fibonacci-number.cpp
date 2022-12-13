class Solution {
    vector<int> fibo;

public:
    Solution(){
        fibo.assign(31, 0);
        fibo[0] = 0;
        fibo[1] = 1;
        for(int i = 2; i <= 30; i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }
    int fib(int n) {
        return fibo[n];
    }
};