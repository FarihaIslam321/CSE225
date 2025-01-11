#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the array row : "<<endl;
    cin>>m;
    cout<<"Enter the array column : "<<endl;
    cin>>n;

    char **p;
    p = new char *[m];

    for(int i=0;i<m;i++)
    {
        p[i] = new char[n];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<"Enter elements["<< i << j << "]: "<<endl;
            cin>>p[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    delete[] p;

    return 0;

}
