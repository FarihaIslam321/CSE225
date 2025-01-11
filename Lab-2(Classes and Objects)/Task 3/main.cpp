#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int row,col,x;
    cout<<"Enter the number of row: ";
    cin>>row;
    cout<<"Enter the number of coloumn: ";
    cin>>col;

     dynArr a(row,col);

     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
             cout<<"Enter the element for array [" <<i <<j <<"]: ";
             cin>>x;
             a.setValue(i,j,x);
         }
     }

     cout<<"The 2D array is :" <<endl;

     for(int i=0;i<row;i++)
     {
         for(int j=0;j<col;j++)
         {
            cout<<a.getValue(i,j) <<" ";
         }
         cout<<endl;
     }
    return 0;
}
