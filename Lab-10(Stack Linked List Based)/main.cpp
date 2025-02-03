#include <iostream>
#include <string>
#include "stacktype.cpp"
using namespace std;

int priority(char ch)
{
    int precedence = 0;            //precedence of operators means order of operations in an expression
    if (ch == '+') precedence = 1;
    else if (ch == '-') precedence = 2;
    else if (ch == '*') precedence = 3;
    else if (ch == '/') precedence = 4;

    return precedence;
}

int main()
{
    string value, postfix;
    cin >> value;

    //Convert infix to postfix
    StackType<char> s;
    for (char i: value)
    {
        if (i == ' ')            //skip space characters
            continue;

        if (isdigit(i))
            postfix += i;

        else
        {
            if (i == '(' || i == ')')
            {
                if (i == '(')
                    s.Push(i);

                else
                {
                    while (!s.IsEmpty() && s.Top() != '(')         //pop all operators until an open bracket is seen
                    {
                        postfix = postfix + " " + s.Top();
                        s.Pop();
                    }

                    if (s.IsEmpty())        //if no open bracket, stack empty. Invalid expression
                    {
                        cout << "Invalid expression" << endl;
                        return 0;
                    }
                    s.Pop();
                }
                continue;
            }


            while (!s.IsEmpty() && s.Top() != '(' && priority(s.Top()) > priority(i))       //pop operators with high precedence first
            {
                postfix = postfix + " " + s.Top();
                s.Pop();
            }
            postfix += " ";         //push present operator in stakc
            s.Push(i);
        }
    }

    while (!s.IsEmpty())
    {
        if (s.Top() == '(')        //any open bracket remains then invalid expression
        {
            cout << "Invalid expression" << endl;
            return 0;
        }
        postfix = postfix + " " + s.Top();
        s.Pop();
    }


    //Solve postfix
    StackType<double> s1;
    string temp;

    for (int i = 0; i < postfix.length(); i++)
    {


        if (!isdigit(postfix[i]) && postfix[i] != ' ')
            {

            double temp2 = s1.Top();
            s1.Pop();

            if (s1.IsEmpty())
            {
                cout << "Invalid expression" << endl;
                return 0;
            }
            double temp1 = s1.Top();
            s1.Pop();


            if (postfix[i] == '+')
                s1.Push(temp1 + temp2);
            else if (postfix[i] == '-')
                s1.Push(temp1 - temp2);
            else if (postfix[i] == '*')
                s1.Push(temp1 * temp2);
            else if (postfix[i] == '/')
                s1.Push(temp1 / temp2);
            i++;
        }

        else if (isdigit(postfix[i]))
        {
            temp += postfix[i];
        }

        else if (postfix[i] == ' ')
        {
            char *ptr;


            if (!temp.empty())
                s1.Push(strtod(temp.c_str(), &ptr));
            temp = "";
        }
    }

    cout << s1.Top() << endl;

    return 0;
}
