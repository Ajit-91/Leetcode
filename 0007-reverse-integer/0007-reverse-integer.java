class Solution {
    public int reverse(int x) {
        int ans = 0;
        while (x != 0)
        {
            int unitDigit = x % 10;
            int temp = (ans*10) + unitDigit;
            if((temp - unitDigit)/10 != ans)
            {
                return 0;
            }
            ans = temp;
            x /= 10;
        }
        return ans;
    }
}