#include <iostream>
using namespace std;

#define MAX 15

// User defined functions....
class Stack
{
    int top;

public:
    int a[MAX];
    Stack() { top = 0; }

    int Pop()
    {
        if (top == 0)
        {
            cout << "Stack Underflow\n";
            return 0;
        }
        else
        {
            top--;
            cout << "Successfully Popped.\n";
            return a[top];
        }
    }
};

int main() // Main function
{
    Stack s;
    int num;
    cout << "How many numbers to Pop in Stack: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
       cout<< s.Pop();
    }

    return 0;
}