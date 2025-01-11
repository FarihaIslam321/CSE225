//Task - 01

#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the array size : "<<endl;
    cin>>m;

    int *p;
    p = new int[m];

    for(int i=0;i<m;i++)
    {
        cout<<"Enter the number"<<"["<<i<<"]: "<<endl;
        cin>>p[i];
    }

    for(int i=0;i<m;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    delete []p;

    return 0;
}
