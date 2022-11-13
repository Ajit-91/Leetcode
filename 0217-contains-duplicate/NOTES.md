```
bool containsDuplicate(vector<int>& nums) {
// map to store frequency of each number
unordered_map<int, int> freq;
for(int num : nums){
// if frequency == 1 => current num is duplicate
// hence return true
if(freq.count(num) >= 1){
return true;
}
// store the frequency
freq[num]++;
}
return false;
}
```