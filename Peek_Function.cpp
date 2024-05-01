#include <iostream>
using namespace std;

#define MAX 30

class Stack
{
    int Top, Arr[MAX];

public:
    Stack() { Top = -1; }
    void push(int Num)
    {
        if (Top >= MAX)
            cout << "ERROR! Overflow... Stack is full!" << endl;
        else
        {
            Arr[++Top] = Num;
        }
    }
    int pop()
    {
        if (Top < 0)
            cout << "ERROR! UnderFlow... Stack is Empty!" << endl;
        return Arr[Top--];
    }
    int peek(int Index)
    {
        if (Top - Index + 1 < 0)
            return -1;
        else
            return Arr[Top - Index + 1];
    }
    bool isEmpty()
    {
        if (Top < 0)
            return true;
        else
            return false;
    }
};
// User defined functions...

int main() // Main function
{
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    cout <<"Peek 2: "<< S.peek(2) << endl;

    cout <<"Pop: "<< S.pop() << endl;
    cout <<"Pop: "<< S.pop() << endl;

    cout <<"Peek 2: "<< S.peek(2) << endl;

    cout <<"Check isEmpty?: "<< S.isEmpty() << endl;
    return 0;
}