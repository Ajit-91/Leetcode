class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> markAsSeen;
        for(int i = 0; i<nums.size(); i++)
        {
            int key = target - nums[i];
            if(markAsSeen.count(key) > 0){ // if key exists in map
                ans.push_back(i);
                ans.push_back(markAsSeen[key]);
                return ans;
            }else{
                markAsSeen[nums[i]] = i;
            }
        }
        return ans;
    }
};