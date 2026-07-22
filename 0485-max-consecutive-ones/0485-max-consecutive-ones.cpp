class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_c_ones = 0;
        int current_c_ones = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                current_c_ones++;
                if (current_c_ones > max_c_ones) {
                    max_c_ones = current_c_ones;
                }
            } else {
                current_c_ones = 0;
            }
        }
        return max_c_ones;
    }
};