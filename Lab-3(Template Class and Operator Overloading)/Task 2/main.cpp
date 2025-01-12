#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex c1(2,4);
    Complex c2(2,4);
    cout<<"Print the number : "<<endl;
    c1.Print();
    c2.Print();
    cout<<"Multiplication : "<<endl;
    Complex c3 = c1*c2;
    c3.Print();
    cout<<"Check equality : "<<endl;
    if(c1!=c2)
    {
        cout<<"c1 not equal to c2"<<endl;
    }
    else
    {
        cout<<"c1 equal to c2"<<endl;
    }
    return 0;
}
