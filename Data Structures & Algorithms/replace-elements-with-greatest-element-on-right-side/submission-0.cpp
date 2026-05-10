class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int n = arr.size();
        int end = n -1; // Have end of the array 
        int maxRight = -1;

        for(int i = end; i >= 0; i--) // Take the end of the array until i = 0. 
        {
            int current = arr[i]; //Current is the end right now
            arr[i] = maxRight;
            maxRight = max(maxRight,current);
        }
        return arr;
    }
};