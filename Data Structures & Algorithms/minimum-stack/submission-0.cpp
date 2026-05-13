class MinStack {
public:
    stack<int> st; //Stores every value normally
    stack<int> minStack; //Stores the min values.

    MinStack() {}
    
    void push(int val) 
    {
        st.push(val); //Push val onto main stack.

        // min of val or if the minStack is is empty then choose val else top of the min stack. 
        val = min(val, minStack.empty() ? val : minStack.top());

        //Push the value to the min stack.
        minStack.push(val);
    }
    
    void pop() 
    {
        st.pop(); //Remove top from main stack
        minStack.pop(); //Remove top from minStack.
    }
    
    int top() 
    {
        return st.top(); //Return the top of main stack.
    }
    
    int getMin() 
    {

        return minStack.top(); //Return the top of the min stack.
    }
};
