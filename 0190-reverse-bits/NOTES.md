Method 1:
* * Make a vector to store reversed bits
* Iterate over th e given number and check : if LSB is 1 => push it into bits vector
* else push 0
* convert the binary bits into decimal and return
​
```
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
```
​
​
Method 2 :
​
```
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