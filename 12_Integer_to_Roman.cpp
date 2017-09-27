class Solution {
public:
    string intToRoman(int num) {
        string a[4][10] = 
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
            "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
            "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
            "", "M", "MM", "MMM"};
        string result = "";
        int count = 0;
        while(num != 0) {
            int temp = num % 10;
            string temp1 = result;
            string temp2 = a[count][temp];
            string temp3 = temp2 + temp1;
            result = temp3;
            num = num / 10;
            count++;
        }
        return result;
    }
};