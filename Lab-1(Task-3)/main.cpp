#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the array row : "<<endl;
    cin>>m;
    cout<<"Enter the array column : "<<endl;
    cin>>n;

    int colArray[m];
    int **p;
    p = new int *[m];

    cout<<"Enter the row size: "<<endl;

    for(int i=0;i<m;i++)
    {
        cin>>n;
        p[i] = new int[n];
        colArray[i] = n;
    }

    cout<<"The result: "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<colArray[i];j++)
        {
            cin>>p[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<colArray[i];j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    delete[] p;

    return 0;
}
