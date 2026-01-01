// Stack class.
class Stack

{

    int size;

    int *arr;

    int index;

public:

    

    Stack(int capacity) 

    {

      this->size=capacity;

      arr=new int[size];

      index=-1;  

    }

 

    void push(int num) 

    {

        if(index!=size-1)

        {

            index++;

            arr[index]=num;

        }

    }

 

    int pop() 

    {

        if(index!=-1)

        {

           int ans=arr[index];

           index--;

           return ans;

        }

        else

        {

            return -1;

        }

    }

    

    int top() 

    {

        if(index!=-1)

        {

            return arr[index];

        }

        else

        {

            return -1;

        }

    }

    

    int isEmpty() 

    {

        if(index==-1)

        {

            return 1;

        }

        else

        {

            return 0;

        }

    }

    

    int isFull() 

    {

        if(index==size-1)

        {

            return 1;

        }

        else

        {

            return 0;

        }

    }

    

};
