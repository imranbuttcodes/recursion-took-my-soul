class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero++;
            } else if (nums[i] == 1) {
                one++;
            } else {
                two++;
            }

        }

        int j = 0;
        for(int i = 0; i < zero; i++) {
            nums[j] = 0;
            j++;
        }

        for(int i = 0; i < one; i++) {
            nums[j] = 1;
            j++;
        }


        for(int i = 0; i < two; i++) {
            nums[j] = 2;
            j++;
        }

    }
};