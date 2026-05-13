class Solution {
public:
    bool isValid(string s) {
        // Create our stack
        stack<char> stack;

        //Create our hash map keys.
        // Think of it as a dictionary.
        unordered_map<char, char> closeToOpen = 
        {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        //Loop through every char in the string each variable is temp c
        for (char c : s) 
        {
            //Checks to see if c is in the map.
            if (closeToOpen.count(c)) 
            {
                // If the stack is not empty and
                // does the stack top match c.
                if (!stack.empty() && stack.top() == closeToOpen[c])
                {
                    //If both passed pop it... forget ab it.
                    stack.pop();
                } else 
                {
                    //If either of those are false
                    return false;
                }
            } 
            //Outer if else: If c is ot a opening bracket.
            else 
            {
                //Push to the stack for later use.
                stack.push(c);
            }
        }
        //If empty everything matched false if stuff is still in there. 
        return stack.empty();
    }
};