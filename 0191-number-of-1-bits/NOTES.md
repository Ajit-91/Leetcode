Check if ith bit is set
If ith bit is set increment the ans count
​
```
int hammingWeight(uint32_t n) {
int ans = 0;
for(int i = 0; i < 32; i++){
if(n & (1<<i)){
ans++;
}
}
return ans;
}
```