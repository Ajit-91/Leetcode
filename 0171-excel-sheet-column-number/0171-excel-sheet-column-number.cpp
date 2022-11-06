class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int s = columnTitle.size();
        for(int i = 0; i < s; i++){
            ans += pow(26, s-1-i) * (columnTitle[i] - 'A' + 1);
        }
        return ans;
    }
};