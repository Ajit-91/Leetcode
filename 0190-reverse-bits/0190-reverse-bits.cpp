class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int i = 0;
        while(n){
            if(n & 1){
                // if ith bit is set then
                // set the 31-i th bit in ans
                // this will lead to reversal of bits
                ans |= 1<<(31-i);
            }
            n >>= 1;
            i++;
        }
        return ans;
    }
};