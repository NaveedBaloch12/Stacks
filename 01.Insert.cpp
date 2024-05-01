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
    bool Push()
    {
        if (top == MAX)
        {
            cout << "Stack Overflow\n";
            return false;
        }
        else
        {
            cin >> a[top];
            top++;
            cout << "Successfully Pushed.\n";
            return true;
        }
    }
};

int main() // Main function
{
    Stack s;
    int num;
    cout << "How many numbers to Push in Stack: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter Element: ";
        s.Push();
    }

    return 0;
}