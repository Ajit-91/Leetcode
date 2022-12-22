class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int noOfOnes = 0;
        for(int num : nums){
            if(num == 1){
                noOfOnes++;
                ans = max(ans, noOfOnes);
            }
            else{
                ans = max(ans, noOfOnes);
                noOfOnes = 0;
            }
        }
        return ans;
    }
};