#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
     int size,x;
     dynArr a(5);

  cout<<"Enter the size of array: ";
  cin>>size;
  a.allocate(size);

  for(int i=0;i<size;i++)
  {
      cout<< "Enter the second array element for [" <<i <<"]: ";
      cin>>x;
      a.setValue(i,x);

  }

  cout<<"\n \nThe resized array : ";

  for (int i=0;i<size;i++)
   {
       cout<<a.getValue(i) <<" ";

   }
         cout<< endl;


    return 0;
}
