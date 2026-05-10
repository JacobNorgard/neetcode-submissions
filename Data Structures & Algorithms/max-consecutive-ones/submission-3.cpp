class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int size = nums.size();
        int curCount = 0;
        int maxConsec = 0;

        for(int i = 0; i < size; i++) //For loop to iterate through array
        {
            if(nums[i] == 0)
            {
                maxConsec = max(curCount, maxConsec);
                curCount = 0;
            }
            else 
            curCount++;
        }
        return max(curCount, maxConsec);
    }
};