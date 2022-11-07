Method 1:
* Convert num to string
* find first 6 from left and change it to 9
* thus we get the max num
* now convert string to int again and return
​
```
// function to reverse a number
int reverseNum(int num){
int ans = 0;
while(num > 0){
ans = ans* 10 + (num % 10);
num /= 10;
}
return ans;
}
// function to convert int to string
string toString(int num){
int n = reverseNum(num);
string ans;
while(n > 0){
ans.push_back('0' + (n % 10));
n /= 10;
}
return ans;
}
```
​
Method 2 : Optimal
​
* find first ocuurence index of 6 from left of number
*  then do
*  num = num + 3 * 10^index
*  return num;
​
​
![](https://leetcode.com/problems/maximum-69-number/Figures/1323/1323-3.png)