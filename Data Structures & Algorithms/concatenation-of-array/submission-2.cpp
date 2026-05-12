class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        // Integer array of nums of length n
        int n = nums.size(); // Gets size off array int n.

        // Need to make an arr with size 2n.
        vector<int> ans(4 * n);


        //Will need a for loop to iterate through array elements to copy to new array
        for(int i = 0; i < n; i++)
        {
            // Say I wanted to add more copies... 
            ans[i] = ans[i + n] = nums[i];
            ans[i] = ans[i + 2 *n] = nums[i];
            ans[i] = ans[i + 3*n] = nums[i];
        }
        
        return ans;
    }
};