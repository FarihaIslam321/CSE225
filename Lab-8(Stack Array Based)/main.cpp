#include <iostream>
#include "StackType.h"
#include "StackType.cpp"

using namespace std;

int main()
{
	StackType<int> stack, s1;

	if (stack.IsEmpty())
	{
        cout << "Stack is Empty" << endl;
    }

    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);

    if (!stack.IsEmpty())
	{
        cout << "Stack is not Empty" << endl;
    }

    if (!stack.IsFull())
	{
        cout << "Stack is not full" << endl;
    }

    while (!stack.IsEmpty())
	{
        s1.Push(stack.Top());
        stack.Pop();
    }

    while (!s1.IsEmpty())
	{
        cout << s1.Top() << " ";
        stack.Push(s1.Top());
        s1.Pop();
    }
    cout << endl;

    stack.Push(3);

    while (!stack.IsEmpty())
	{
        s1.Push(stack.Top());
        stack.Pop();
    }

    while (!s1.IsEmpty())
	{
        cout << s1.Top() << " ";
        stack.Push(s1.Top());
        s1.Pop();
    }
    cout << endl;

    if (stack.IsFull())
	{
        cout << "Stack is full" << endl;
    }

    stack.Pop();
    stack.Pop();

    cout << "Top item after popping two elements: " << stack.Top() << endl;

    StackType<char>s;
	int flag=1;
    char c;
    while(cin>>c && c!='0')
    {
    	if(c=='(' && !s.IsFull())
		{
			s.Push(c);
		}
		else if(c==')' && !s.IsEmpty())
		{
			s.Pop();
		}
		if(s.IsEmpty() && flag==1)
		{
			cout<<"Balanced"<<endl;
		}
		else
		{
			cout<<"Not Balanced"<<endl;
		}
    }


    return 0;
}
