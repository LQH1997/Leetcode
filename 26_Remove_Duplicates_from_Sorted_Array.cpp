class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                len -= 1;
                vector<int>::iterator itr = nums.begin();
                nums.erase(itr+i);
                i -= 1;
            }
        }
        return len;
    }
};