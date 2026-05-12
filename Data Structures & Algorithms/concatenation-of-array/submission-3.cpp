class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        // Need to make an array ans
        vector<int> ans;


        //Will need a for the goes through twice
        for(int i = 0; i < 2; i++)
        {
            //Range based loop to iterate over each elements in nums.
            // Stores elemets of nums in num for ans to store. 
            for(int num : nums)
            {
                ans.push_back(num);
            }

        }
        
        return ans;
    }
};