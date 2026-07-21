class Solution {
public:
//     void rotateArr(vector<int>& nums) {

//     int temp = nums[nums.size() - 1];

//     int n = nums.size() - 2;

//     int n_ = nums.size() - 1;

//     for (int i = n; i >= 0; i--) {
//         nums[n_] = nums[i];
//         n_--;
        
//     }

//     nums[0] = temp;

// }


    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};