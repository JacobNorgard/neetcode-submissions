class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        // Integer array of nums of length n
        int n = nums.size(); // Gets size off array int n.

        // Need to make an arr with size 2n.
        vector<int> ans;
        ans.reserve(2*n);


        //Will need a for loop to iterate through array elements to copy to new array
        for(int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
        }
        // Can add more accoring to 2,3,4,5,6,7 * n.
        
        
        return ans;
    }
};