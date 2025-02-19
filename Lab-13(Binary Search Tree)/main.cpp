#include <iostream>
#include "binarysearchtree.cpp"


using namespace std;

void checkEmpty(bool x)
{
    if (x)
        cout << "Tree is Empty" << endl;
    else
        cout << "Tree is not Empty" << endl;
}

void checkFoundItem(TreeType<int>&tree, int item)
{
    bool found;
    tree.RetrieveItem(item, found);
    if (found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }
}

int main()
{
    TreeType<int>tree;
    checkEmpty(tree.IsEmpty());

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    checkEmpty(tree.IsEmpty());

    cout << tree.LengthIs() << endl;

    checkFoundItem(tree, 9);
    checkFoundItem(tree, 13);

    tree.ResetTree(IN_ORDER);
    bool finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }

    cout<<endl;
    tree.ResetTree(PRE_ORDER);
     finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }

    cout<<endl;
    tree.ResetTree(POST_ORDER);
     finish = false;
    while (!finish)
    {
        int value;
        tree.GetNextItem(value, POST_ORDER, finish);
        cout << value << " ";
    }
    cout<<endl;
    return 0;
}
