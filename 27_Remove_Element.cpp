class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == val) {
                vector<int>::iterator iter = nums.begin();
                nums.erase(iter+i);
                i -= 1;
            }
        }
        return nums.size();
    }
};