class Solution {
public:
 void moveZeroes(vector<int>& nums) {

        int end = nums.size() - 1;
        for(int i = 0; i < end; i++) {
            if (nums[i] == 0) {
                for (int j = i; j < nums.size(); j++) {
                    if (j + 1 < nums.size()) {
                        nums[j] = nums[j + 1];
                    }
                }
                nums[nums.size() - 1] = 0;

                i--;
                end--;
            }
        }
    }
};