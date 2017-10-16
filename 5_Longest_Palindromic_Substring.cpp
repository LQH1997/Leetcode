class Solution {
public:

string longestPalindrome(string s) {
    int max = 1;
    int strStart = 0;
    string result;
    if(s.size() == 0 || s.size() == 1) return s;
    for(int i = 0; i < s.size(); ) {
        if(s.size() - i <= max / 2) break;
        int start = i, end = i;
        while(end < s.size() - 1 && s[end] == s[end+1]) end = end + 1;
       // cout << "end " << end ;
        i = end + 1;
        while(end < s.size() - 1 && start > 0 && s[end+1] == s[start - 1]) {
            end = end + 1;
            start = start - 1;
        }
      //  cout  << "start " << start << " end " << end << endl;
        int tempLen = end - start + 1;
      //  cout << "tempLen " << tempLen << endl;
        if(tempLen > max) {
            strStart = start;
            max = tempLen;
            string temp(s, strStart, max);
            result = temp;
        }
    }
    //return s.substr(strStart, max);
    if(result.size() == 0) result += s[0];
    return result;
}


};