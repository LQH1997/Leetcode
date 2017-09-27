class Solution {
public:
 int myAtoi(string str) {
        int pow = 0;
        int sign = 1;
        int result = 0;
        int i = 0;
        for(i = 0; i < str.size(); i++) {
            if(str[i] == ' ') continue;
            else break;
        }
      //  cout << "aaa" << i << endl;
     //   cout << "aaa1" << i << endl;
        if(str[i] == '-') {
            sign = -1;
            cout << "in 1" << endl;
            i++;
        } else if(str[i] == '+'){
            sign = 1;
        //    cout << "in 2" << endl;
            i++;
        } else {
      //  	cout << "in 3" << endl;
        	sign = 1;
        }
    //    cout << "bbb" << i << endl;
    int temp = 0;
        for(; i < str.size(); i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                temp = result * 10 + (str[i] - '0');
				if(temp / 10 != result) {
					if(sign == 1) return INT_MAX;
					else return INT_MIN;
				}
				result = temp;
            } else {
                break;
            }
        }
        return result*sign;
    }
};