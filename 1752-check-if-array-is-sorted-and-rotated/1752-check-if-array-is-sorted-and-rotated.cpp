class Solution {
public:
   
bool Sorted(vector<int>& nums) {
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] > nums[i]) {
            return false;
        }     
    }
    
    return true;

}

void rotateArr(vector<int>& nums) {

    int temp = nums[nums.size() - 1];

    int n = nums.size() - 2;

    int n_ = nums.size() - 1;

    for (int i = n; i >= 0; i--) {
        nums[n_] = nums[i];
        n_--;
        
    }

    nums[0] = temp;

}


    bool check(vector<int>& nums) {
    for (int x = 0; x < nums.size(); x++) {
        rotateArr(nums);
        if (Sorted(nums))   {
            return true;
        }
    }
    
    return false;
        
    }
};