#include <iostream>
#include <string>
using namespace std;
    bool valid(string s, int start, int end) {
        int arr[26];
        for(int i = 0; i < 26; i++) {
        	arr[i] = 0;
        }
     //   cout << end << endl;
        for(int i = start; i <= end; i++) {
            arr[s[i]-'a'] += 1;
            if(arr[s[i]-'a'] > 1) {
            	for(int q = 0; q < 26; q++) {
         //   		cout << 'a'+ q << ":" << arr[q] <<" ";
            	}
          //  	cout << endl;
            	return false;
            }
        }
        return true;
    }

    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int start = 0;
        for(int i = 1; i < s.size(); i++) {
        if(valid(s, start, i)) {
            int temp = i - start;
            if(temp > max) max = temp;
         //   cout << temp << " " << max <<" " <<i<< endl;;
        } else {
        //	cout << "in else" << endl;
            start++;
        }
        }
        return max+1;
    }
 
int main() {
	string a = "pwwkew";
	cout << lengthOfLongestSubstring(a) << endl;
}