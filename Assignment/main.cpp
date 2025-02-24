
//Question 1

#include <iostream>
#include "stacktype.cpp"
#include<string.h>

using namespace std;

int operatorOrder(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '/' || c == '*')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string conversionToPostfix(string input)
{
    StackType<char>s;
    string result;
    for(int i=0;i<input.size();i++)
    {
        if((input[i]>='A' && input[i]<='Z') || (input[i]>='a' && input[i]<='z'))
        {
            result = result + input[i];
        }
        else if(input[i] == '(')
        {
            s.Push(input[i]);
        }
        else if(input[i] == ')')
        {
            while(!s.IsEmpty() && s.Top() != '(')
            {
                result = result + s.Top();
                s.Pop();
            }
            if(!s.IsEmpty())
            {
                s.Pop();
            }
        }
        else
        {
            while(!s.IsEmpty() && operatorOrder(s.Top())>operatorOrder(input[i]))
            {
                result = result + s.Top();
                s.Pop();
            }
            s.Push(input[i]);
        }
    }
    while(!s.IsEmpty())
    {
        result = result + s.Top();
        s.Pop();
    }
    return result;
}


int main()
{
    string infix;
    infix = "(a+(b*c))/d";
    cout<<"Input: "<<infix<<endl;
    cout<<"Output: "<<conversionToPostfix(infix)<<endl;
    return 0;
}
