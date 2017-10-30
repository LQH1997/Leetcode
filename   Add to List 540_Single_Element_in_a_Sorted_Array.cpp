class Solution {
public:
int singleNonDuplicate(vector<int>& nums) {
    if(nums.size() == 1)
        return nums[0];
    if(nums[0] != nums[1])
        return nums[0];
    if(nums[nums.size()-1] != nums[nums.size()-2])
        return nums[nums.size()-1];
    int left = 0, right = nums.size()-1;
    while(left <= right) {
        int mid = (left + right)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            return nums[mid];
        if(nums[mid] == nums[mid+1])//change the array to two parts:[l,mid-1]&&[mid+2,r];
        {
            if((mid-left) % 2 == 1)
                right = mid-1;
            else
                left = mid+2;
        }
        else if(nums[mid] == nums[mid-1])
        {
            if((mid-left-1) % 2 == 1)
                right = mid-2;
            else
                left = mid+1;
        }
    }
}
};