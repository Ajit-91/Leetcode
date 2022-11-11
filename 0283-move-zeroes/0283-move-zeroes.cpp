class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Two pointers i and j
        // i stands at zero and j stands at non zero
        // then i and j are swapped and moved forward
        // process is repeated
        int i = 0, j = 1;
        int n = nums.size();
        
        while(i < n && j < n){
            if(nums[i] == 0){
                while(j < n && nums[j] == 0) j++;
                if(j >= n) break;
                swap(nums[i], nums[j]);
            }
            i++;
            j++;
           
        }
    }
};