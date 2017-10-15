class Solution {
public:
    bool isPalindrome(int x) {
        int tempX = x;
        int temp = 0;
        while(tempX > 0) {
            temp = temp * 10 + tempX % 10;
            tempX = tempX / 10;
        }
        if(temp == x) return true;
        else return false;
    }
};