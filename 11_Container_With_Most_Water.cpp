class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int water = 0;
        int end = height.size() - 1;
        while(start < end) {
            int minHight = min(height[start], height[end]);
            water = max(water, minHight * (end - start));
            while(height[start] <= minHight && start < end) start++;
            while(height[end] <= minHight && start < end) end--;
        }
        return water;
    }
};