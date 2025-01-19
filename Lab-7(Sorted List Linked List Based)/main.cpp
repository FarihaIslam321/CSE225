#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timestamp.h"

using namespace std;

int main()
{
   SortedType<timeStamp> t;

    cout<<"After inserting 5 items: "<<endl;
    t.InsertItem(timeStamp(15,34,23));
    t.InsertItem(timeStamp(13,13,02));
    t.InsertItem(timeStamp(43,45,12));
    t.InsertItem(timeStamp(25,36,17));
    t.InsertItem(timeStamp(52,02,20));

    timeStamp temp;
    for(int i=0;i<t.LengthIs();i++)
    {
        t.GetNextItem(temp);
        temp.print();
    }

     cout<<"\nAfter deleting timeStamp  25   36   17 : "<<endl;
    t.DeleteItem(timeStamp(25,36,17));
    t.ResetList();
    for(int i=0;i<t.LengthIs();i++)
    {
        t.GetNextItem(temp);
        temp.print();
    }




    return 0;
}
