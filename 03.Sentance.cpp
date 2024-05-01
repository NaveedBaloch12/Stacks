#include <iostream>
using namespace std;

#define MAX 100 // Maximum Numbers of items in stack

class Stack
{
	int top;
public:
	char a[MAX];
	Stack() { top = 0; }
	bool Push(char num); // To Push New Item
	char Pop();			// To Pop Upper Item
	char Peek();			// To Show Upper Item
	bool isEmpty();		// Tell is Stack Empty OR Not
};

bool Stack::Push(char num)
{
	if (top > MAX)
	{
		cout << "Overflow: Stack is Full.\n";
		return false;
	}
	else
	{
		top++;
		a[top] = num;
		cout << "Number is Pushed Successfully.\n";
		return true;
	}
}

char Stack::Pop()
{
	if (top == 0)
	{
		cout << "Underflow: Stack is Empty.";
		return 0;
	}
	else
	{
		char x = a[top];
		top--;
		return x;
	}
}

char Stack::Peek()
{
	return a[top];
}

bool Stack::isEmpty()
{
	if (top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{ // main function start here
	Stack s;
	int num;
	cout << "How many numbers to Push in Stack: ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		char N;
		cout << "Enter a Char: ";
		cin >> N;
		s.Push(N);
	}

	while (s.isEmpty() == 0)
	{
		cout << s.Peek() << "";
		s.Pop();
	}
	return 0;
}
