class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // vector to store reversed bits
        vector<int> bits(32, 0);
        uint32_t ans = 0;
        int i = 0;
        while(n){
            // if LSB is 1 => push it into bits vector
            if(n & 1){
                bits[i] = 1;
            }else{
                bits[i] = 0;
            }
            n >>= 1;
            i++;
        }
        // converting binary bits to decimal
        for(int bit : bits){
        // following is same as ans = ans * 2 + bit but faster
            ans <<= 1;
            ans += bit;
        }
        return ans;
    }
};