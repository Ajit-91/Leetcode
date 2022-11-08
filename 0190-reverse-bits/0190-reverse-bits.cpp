class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> bits(32, 0);
        uint32_t ans = 0;
        int i = 0;
        while(n){
            if(n & 1){
                bits[i] = 1;
            }else{
                bits[i] = 0;
            }
            n >>= 1;
            i++;
        }
        for(int bit : bits){
            //cout<<bit;
            ans = ans * 2 + bit;
        }
        return ans;
    }
};