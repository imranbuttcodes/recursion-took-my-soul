class Solution {
public:
   vector<int> findErrorNums(vector<int>& nums) {
        vector <int> ans;
        vector<int> freqs(nums.size() + 1, 0);
        for (int num: nums) {
            freqs[num]++;
        }
    int missing, repetead;
        for(int i = 1 ; i <= nums.size(); i++) {
            if (freqs[i] > 1)   repetead = i;
            if (freqs[i] == 0)  missing = i;    
        }

        ans.push_back(repetead);
        ans.push_back(missing);

    

        return ans;


    }

};