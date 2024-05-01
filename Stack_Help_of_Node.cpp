#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
    int top;
    Node *head;

public:
    Stack() { top = -1; }
    void push(int Num)
    {
        Node *temp = new Node();
        temp->data = Num;
        temp->next = NULL;
        if (top == -1)
            head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        top++;
    }
    int pop()
    {
        if (top == -1)
            cout<<"Error! UnderFlow!"<<endl;
        Node *temp = head;
        head = head->next;
        delete temp;
        top--;
        return temp->data;
    }
};
// User defined functions...

int main() // Main function
{  
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<s.pop()<<endl;
    cout<<s.pop();

    return 0;
}