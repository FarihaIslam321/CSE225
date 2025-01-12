#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
    int x, size = 3;                //x=input
    dynArr<int>p1(size);
    p1.setValue(0,2);
    p1.setValue(2,4);
    p1.setValue(3,8);
    p1.setValue(5,5);
    cout<<p1.getValue(0);

    for(int i=0;i<size;i++)
    {
        cout<<p1.getValue(i)<<" ";
    }

    return 0;
}
