* Initialize ans = 0
* loop till x != 0
			* pop out unit digit from given x
			* ans = ans * 10 + unitDigit
* return ans;

----------------Check for overflow------------------------

ans = ans * 10 + unitDigit       ----> may overflow

it will overflow when :

1. For x > 0

	ans * 10 + unitDigit > INT_MAX
  
=> ans > (INT_MAX - unitDigit)/10            { since x > 0, => unitDigit > 0}

2. For x < 0

	ans * 10 + unitDigit < INT_MIN
  
=> ans < (INT_MIN - unitDigit)/10             { since x < 0, => unitDigit < 0}
		 
