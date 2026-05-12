class DynamicArray {
private:
    int* arr;
    int capacity;
    int length;

public:
    DynamicArray(int capacity) : capacity(capacity), length(0)
    {
        arr = new int[capacity];
    }

    int get(int i) 
    {
        //Return the value at the ith index. 
        return arr[i];
    }

    void set(int i, int n) 
    {
        //Set the value n at the ith index
        arr[i]= n;
    }

    void pushback(int n) 
    {
        //Insert n in the last position of the array
        if(length == capacity)
        {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback()
    {
        //Remove the last element
        if(length > 0)
        {
            //Soft delete the last element.
            length--;
        };
        return arr[length];

    }

    void resize() 
    {
        capacity *= 2;
        int* newArr = new int[capacity];

        for(int i = 0; i < length; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize() 
    {
        return length;
    }

    int getCapacity() 
    {

        return capacity;

    }
};
