class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k = k % nums.size();
	   if(k == 0) return;
       // reverse first n-k elements
	   reverse(nums.begin(), nums.end()-k);
       // reverse last k elements
	   reverse(nums.end()-k, nums.end());
       // reverse entire array
	   reverse(nums.begin(), nums.end());
    }
};