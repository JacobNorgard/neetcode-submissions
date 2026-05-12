class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        //Create an array stack
        vector<int> stack;

        // Process each operation in the input list
        for(const string& op : operations)
        {

            // stack.back gives the last element in the array.
            // stack pop back removes the last element

            //New score that is the sum of the previous two scores.
            if(op == "+")
            {
                //Get the last inputted score.
                int top = stack.back(); stack.pop_back();

                // New Score = Last score + second to last score.
                int newTop = top + stack.back();

                //Restore last score
                stack.push_back(top);

                //Pish the new calculated score
                stack.push_back(newTop);
            }
            //new score that is double of the previous score. 
            else if(op == "D")
            {
                //Gets the back element 
                stack.push_back(2 * stack.back());
            }
            //C removing it from the record.
            else if(op == "C")
            {
                // Delete stack from the back. 
                stack.pop_back();
            }
            else
            {
                // stoi is string to integer.
                stack.push_back(stoi(op));
            }

        }
        // Returns the added up scores. 
        return accumulate(stack.begin(), stack.end(), 0);
    }
};