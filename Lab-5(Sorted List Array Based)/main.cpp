#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    SortedType<int>list;
    cout<<"\nLength of the list: "<<list.LengthIs()<<endl;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);
    int item;
    cout<<"List: ";
    for(int i=0;i<list.LengthIs();i++)
    {
        list.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    bool found;
    item=6;
    list.RetrieveItem(item,found);
    if(found)
    {
        cout<<"Item 6 is found."<<endl;
    }
    else
    {
        cout<<"Item 6 is not found."<<endl;
    }

    item=5;
    list.RetrieveItem(item,found);
    if(found)
    {
        cout<<"Item 5 is found."<<endl;
    }
    else
    {
        cout<<"Item 5 is not found."<<endl;
    }

    if(list.IsFull())
    {
        cout<<"List is full."<<endl;
    }
    else
    {
        cout<<"List is not full."<<endl;
    }

    list.DeleteItem(1);
    list.ResetList();
    for(int i=0;i<list.LengthIs();i++)
    {
        list.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    if(list.IsFull())
    {
        cout<<"List is full."<<endl;
    }
    else
    {
        cout<<"List is not full.\n\n"<<endl;
    }


      SortedType<timeStamp>t;
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

}
