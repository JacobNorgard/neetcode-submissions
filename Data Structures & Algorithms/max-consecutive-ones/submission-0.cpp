class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        // For loop for getting index
        for(int i = 0; i < n; i++)
        {
            int count = 0;

            //Forward Scanning for loop
            for(int j = i; j < n; j++)
            {
                if(nums[j] == 0) break;
                count++;
            }
            //Max of current and reset attempt
            res = max(res,count);
        }
        return res; 
    }
};