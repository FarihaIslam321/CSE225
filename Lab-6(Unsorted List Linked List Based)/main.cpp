#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType<int> list1, list2, mergedList;

    int n, x;            //n=number of elements and x=current element being inputed in the list                                 // Taking inputs for list1
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        list1.InsertItem(x);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        list2.InsertItem(x);
    }

    int a,b;            //Temporary variables
    int size1 = list1.LengthIs();
    int size2 = list2.LengthIs();
    list1.GetNextItem(a);
    list2.GetNextItem(b);

    while (size1 > 0 && size2 > 0)          //This loop runs as long as there are elements in the lists
        {
        if (a > b)      //if a>b
        {
            mergedList.InsertItem(a);
            size1--;
            if (size1 > 0)
            {
                list1.GetNextItem(a);
            }
        }
        else if (b > a)     //if b>a
        {
            mergedList.InsertItem(b);
            size2--;
            if (size2 > 0)
            {
                list2.GetNextItem(b);
            }
        }
        else          //if a and b are equal
        {
            mergedList.InsertItem(a);
            mergedList.InsertItem(b);
            size1--;
            size2--;
            if (size1 > 0)
            {
                list1.GetNextItem(a);
            }
            if (size2 > 0)
            {
                list2.GetNextItem(b);
            }
        }
    }

    while (size1 > 0)       //loop for if there are any elements left in list1
    {
        mergedList.InsertItem(a);
        size1--;
        if (size1 > 0)
        {
            list1.GetNextItem(a);
        }
    }

    while (size2 > 0)     //loop for if there are any elements left in list2
    {
        mergedList.InsertItem(b);
        size2--;
        if (size2 > 0)
        {
            list2.GetNextItem(b);
        }
    }

    int mergedValue;
    int mergedSize = mergedList.LengthIs() - 1;

    while (mergedSize >= 0)           //loop to print the merged list
    {
        mergedList.GetNextItem(mergedValue);
        cout << mergedValue << ' ';
        mergedSize--;
    }
    cout << endl;

    return 0;
}
