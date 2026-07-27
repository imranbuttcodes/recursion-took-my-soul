class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = nums.size() - 2;

        // Find the first element from the right that is smaller than its next element

        while (pivot >= 0 && nums[pivot] >= nums[pivot + 1]) {
            pivot--;
        }


        if (pivot < 0) {
            reverse(nums.begin(), nums.end());

            return;
        }

        int successor = nums.size() - 1;

        // Find the rightmost element greater than the pivot element

        while (nums[successor] <= nums[pivot]) {
            successor--;
        }

        swap(nums[pivot], nums[successor]);

        reverse(nums.begin() + pivot + 1, nums.end());

        
    }
};