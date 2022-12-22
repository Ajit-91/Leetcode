class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int noOfOnes = 0;
        for(int num : nums){
            if(num == 1){
                noOfOnes++;
            }
            else{
                // ans = max(ans, noOfOnes);
                noOfOnes = 0;
            }
            ans = max(ans, noOfOnes);
        }
        return ans;
    }
};