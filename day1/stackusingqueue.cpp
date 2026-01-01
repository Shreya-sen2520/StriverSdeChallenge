#include <bits/stdc++.h> 
class Stack {
	queue<int>q1,q2;
    int size;

   public:
    Stack() {
        size=0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
       return size;
    }

    bool isEmpty() {
       if(size==0){
           return true;
       }else{
           return false;
       }
    }

    void push(int element) {
        q2.push(element);
        while(!q1.empty()){
            int val=q1.front();
            q1.pop();
            q2.push(val);
        }
        swap(q1,q2);
        size++;
    }

    int pop() {
        if(!q1.empty())

        {

            int val = q1.front();

            q1.pop();

 

            // Update the value of size

            size--;

            return val;

        }

        else{

            return -1;

        }
    }

    int top() {
         if(!q1.empty())

        {

            return q1.front();

        }

        else

        {

            return -1;

        }
    }
};
