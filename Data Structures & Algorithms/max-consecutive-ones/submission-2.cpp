class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size(); // Size of the array.
        int current = 0;
        int count = 0;

        for(int i = n-1; i >= 0; i--)
        {
            if(nums[i] == 0)
            {
                current = max(count, current);
                count = 0;
            }
            else
            count++;

        }
        return max(count,current);
    }
};