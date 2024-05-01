#include <iostream>
using namespace std;

struct Node
{
    char Data;
    Node *Next;
};

class Stack
{
    Node *Head;
    int top;

public:
    Stack() { top = -1; }
    void Push(char Data)
    {
        Node *temp = new Node();
        temp->Data = Data;
        temp->Next = NULL;
        if (top == -1)
            Head = temp;
        else
        {
            temp->Next = Head;
            Head = temp;
        }
        top++;
    }
    char pop()
    {
        if (top == -1)
            cout << "Error! UnderFlow." << endl;
        Node *temp = Head;
        Head = Head->Next;
        delete temp;
        top--;
        return temp->Data;
    }

    char Peek()
    {
        if (top == -1)
            return '0';
        return Head->Data;
    }

    bool IsEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main() // Main function
{
    string Exp;
    cout << "Enter Expresstion: ";
    getline(cin, Exp);

    Stack S;

    for (int i = 0; i < Exp.size(); i++)
    {
        if (Exp[i] == '(' || Exp[i] == '[' || Exp[i] == '{')
        {
            S.Push(Exp[i]);
            continue;
        }
        if (Exp[i] == S.Peek())
        {
            S.pop();
        }
    }

    if (S.IsEmpty() == true)
    {
        cout << "Expression is True!" << endl;
    }
    else
    {
        cout << "Expression is False!" << endl;
    }
    return 0;
}