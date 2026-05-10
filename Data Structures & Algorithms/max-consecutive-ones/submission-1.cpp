class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxSoFar = 0;
        int count = 0;

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                maxSoFar = max(maxSoFar, count);
                count = 0;
            }else
            count++;
        }
        return max(maxSoFar, count);
    }
};