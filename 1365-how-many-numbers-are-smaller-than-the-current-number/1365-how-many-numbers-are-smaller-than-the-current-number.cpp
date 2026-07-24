class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int current_count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)     continue;
            if (nums[j] < nums[i])  current_count++;
        }
        ans.push_back(current_count);
        
    }
            return ans;
    }
};