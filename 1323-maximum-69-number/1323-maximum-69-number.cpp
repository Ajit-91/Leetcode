class Solution {

public:
    int maximum69Number (int num) {
        int temp = num;
        int sixIndex = -1;
        int i = 0;
        while(temp > 0){
            if(temp % 10 == 6){
                sixIndex = max(sixIndex, i);
            }
            i++;
            temp /= 10;
        }
        return sixIndex == -1 ? num : num + pow(10, sixIndex) * 3;
    }
};