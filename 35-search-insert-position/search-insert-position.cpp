class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int firstIndex = 0, lastIndex = nums.size() - 1;
        
        while (firstIndex <= lastIndex) {
            int mid = firstIndex + (lastIndex - firstIndex) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) firstIndex = mid + 1;
            else lastIndex = mid - 1;
        }
        
        return firstIndex;
    }
};
