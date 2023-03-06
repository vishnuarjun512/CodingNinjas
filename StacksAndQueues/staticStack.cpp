#include <iostream>
using namespace std;

class Stack
{
    int top;
    int *data;
    int capacity;

public:
    Stack(int totalSize)
    {
        capacity = totalSize;
        data = new int[capacity];
        top = -1;
    }

    void displaySize()
    {
        cout << "Size of Stack is " << top + 1 << endl;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top + 1 == capacity)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int newElement)
    {
        if (!isFull())
        {
            data[++top] = newElement;
        }
        else
        {
            cout << "Array is full" << endl;
        }
    }

    void pop()
    {
        if (!isEmpty())
        {

            cout << "Deleted Element is " << data[top] << endl;
            top--;
        }
        else
        {
            cout << "Stack already empty" << endl;
        }
    }

    void displayStack()
    {
        if (isEmpty())
        {
            cout << "Stack empty" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << i << " " << data[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s(3);
    s.push(19);
    s.pop();
    s.push(29);
    s.displayStack();
    s.push(19);
    s.push(49);
    s.displaySize();
    s.displayStack();

    return 0;
}