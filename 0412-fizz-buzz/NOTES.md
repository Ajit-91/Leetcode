* if i is divisible by both 3 and 5 => i % (3*5) = 0 => 1 % 15 = 0
* Do as directed in problem
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
// But % operation is heavy
// So just write the required strings at the correct places

​
// Optimal approach

​
```
vector<string> fizzBuzz(int n) {
  vector<string> ans(n);
  // fist write the numbers as string in all places
  for(int i = 0; i < n; i++){
    ans[i] = to_string(i+1);
  }
  // write "Fizz" at the places multiple of 3
  for(int i = 2; i < n; i+=3){
    ans[i] = "Fizz";
  }
  // write "Buzz" at the places multiple of 5
  for(int i = 4; i < n; i+=5){
    ans[i] = "Buzz";
  }
  // write "FizzBuzz" at the places multiple of 15
  for(int i = 14; i < n; i+=15){
    ans[i] = "FizzBuzz";
  }
  return ans;
}
```
​
