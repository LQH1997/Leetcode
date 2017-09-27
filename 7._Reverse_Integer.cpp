class Solution {
public:
int reverse(int x) {
	int flag = 0;
	if(x >= 0) flag = 1;
	else flag = -1;
	int result = 0;
	if(x < 0) x = -x;
	while(x != 0) {
		int temp = result * 10;
		if(temp / 10 != result) return 0;  
		int mod = x % 10;
		result = result * 10 + mod;
		x = x / 10;
cout << "result: " << result << "x "<< x << endl;
		
	}

	return result * flag;
}

};