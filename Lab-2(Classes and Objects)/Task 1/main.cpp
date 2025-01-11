#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
     int x;
     dynArr a;

   dynArr b(5);

   for (int i=0;i<5;i++)
   {
       cout<< "Enter the element [" <<i <<"] : ";
       cin>>x;
       b.setValue(i,x);
   }

   cout <<"\n \n \nArray is : ";

   for (int i=0;i<5;i++)
   {
       cout<<b.getValue(i) <<" ";

   }
         cout<< "\n\n\n";

    return 0;
}

