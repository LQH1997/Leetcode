class Solution {
public:
string convert(string s, int numRows) {
	int len = s.length();
	string rows[numRows];
	int count = 0;
	int col = 0;
	bool add = true;
	for(int i = 0; i < len; i++) {
		rows[col] += s[i];
		if(add) {
			if(col == numRows - 1) {
				col = numRows - 2;
				if(col < 0) col = 0;
				add = false;
			} else {
				col += 1;
			}
		} else {
			if(col == 0) {
				col = 1;
				if(col >= numRows) col = numRows - 1; 
				add = true;
			} else {
				col -= 1;
				if(col < 0) col = 0;
			}
		} 
	}
	string result;
	for(int j = 0; j < numRows; j++) {
		result += rows[j];
	}
	return result;
}
};