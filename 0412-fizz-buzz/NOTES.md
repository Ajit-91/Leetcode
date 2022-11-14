* if i is divisible by both 3 and 5 => i % (3*5) = 0 => 1 % 15 = 0
* Do as directed in problem
*
```
vector<string> fizzBuzz(int n) {
vector<string> ans(n);
for(int i = 0; i < n; i++){
if((i+1) % 15 == 0){
ans[i] = "FizzBuzz";
}else if((i+1) % 3 == 0){
ans[i] = "Fizz";
}else if((i+1) % 5 == 0){
ans[i] = "Buzz";
}else{
ans[i] = to_string(i+1);
}
}
return ans;
}
```