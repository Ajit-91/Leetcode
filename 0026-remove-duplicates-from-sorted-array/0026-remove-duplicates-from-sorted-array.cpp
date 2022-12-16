class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      // i is catcher and j is thrower
      // that's why i starts from 0 and j starts from 1
      // j moves forward until new element(distinct) is not found (i.e Throws new element)
      // when new element is found by j , i increments and copies the nums[j] (i.e catches new elm)
       int i = 0;
       for(int j = 1; j < nums.size(); j++){
           if(nums[i] != nums[j]){
               nums[++i] = nums[j];
           }
       }
       return i+1;
    }
};