#include <iostream>
using namespace std;

int push(int x)
{
    stack[top] = x;
    top += 1;
}

int pop(int top)
{
    if(top < 0)
    {
        cout << "Empty Stack";
        return INT_MIN;
    }
    ele = stack[top-1];
    top -= 1;
    return ele;
}

int peek(){
    if(top < 0)
    {
        return INT_MIN;
    }
    return stack[top];
}

// Creating a special stack , get min()
