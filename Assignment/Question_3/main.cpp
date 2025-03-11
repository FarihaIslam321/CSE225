
//Question 3

#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

void minimumHeight(TreeType<int> &t, int arr[], int left, int right)
{
    if(left > right)
    {
        return;
    }

    int middle = (left+right)/2;
    t.InsertItem(arr[middle]);
    minimumHeight(t, arr, left, middle-1);
    minimumHeight(t, arr, middle+1, right);
}

int main()
{
    TreeType<int>t,t1;
    t.InsertItem(11);
    t.InsertItem(9);
    t.InsertItem(4);
    t.InsertItem(2);
    t.InsertItem(7);
    t.InsertItem(3);
    t.InsertItem(17);
    t.InsertItem(0);
    t.InsertItem(5);
    t.InsertItem(1);

    t.ResetTree(IN_ORDER);
    bool finished = false;

    int p;
    cout<<"Output(Inorder Traversal): "<<endl;
    int i=0;
    int arr[t.LengthIs()];
    while(!finished)
    {
        t.GetNextItem(p, IN_ORDER, finished);
        arr[i] = p;
        cout<< p <<" ";
        i++;
    }
    cout<<endl;

    cout<<"\nOutput(Inorder Traversal by recursion): "<<endl;
    minimumHeight(t1, arr, 0, 9);
    t1.Print();

    return 0;

}
