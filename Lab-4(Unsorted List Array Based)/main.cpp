#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentinfo.h"

using namespace std;

int main()
{
    UnsortedType<int> List;

    List.InsertItem(5);
    List.InsertItem(7);
    List.InsertItem(6);
    List.InsertItem(9);

    cout << "List of inserted 4 items : ";
    for (int i = 0; i < List.LengthIs(); i++) {
        int item;
        List.GetNextItem(item);
        cout << item << " ";
    }

    cout << endl;


    cout << "List length: " << List.LengthIs() << endl;


    List.InsertItem(1);


    List.ResetList();
    cout << "List of the items after inserting 1: ";
    for (int i = 0; i < List.LengthIs(); i++) {
        int item;
        List.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    int item = 4;
    bool found;
    List.RetrieveItem(item, found);
    cout << "Item 4 is " << (found ? "Found" : "not Found") << endl;

    item = 5;
    List.RetrieveItem(item, found);
    cout << "Item 5 is " << (found ? "Found" : "not Found") << endl;


    item = 9;
    List.RetrieveItem(item, found);
    cout << "Item 9 is " << (found ? "Found" : "not Found") << endl;

    item = 10;
    List.RetrieveItem(item, found);
    cout << "Item 10 is " << (found ? "Found" : "not Found") << endl;


    cout << "List is " << (List.IsFull() ? "Full" : "not Full") << endl;

    List.DeleteItem(5);

    cout << "List is " << (List.IsFull() ? "Full" : "not Full") << endl;

    List.DeleteItem(1);

    List.ResetList();
    cout << "List after deleting 1 : ";
    for (int i = 0; i < List.LengthIs(); i++) {
        int item;
        List.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;


    List.DeleteItem(6);

    List.ResetList();
    cout << "List after deleting 6 : ";
    for (int i = 0; i < List.LengthIs(); i++) {
        int item;
        List.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;


    UnsortedType<studentInfo> studentList;


    studentInfo s1 = {15234, "Jon", 2.6};
    studentInfo s2 = {13732, "Tyrion", 3.9};
    studentInfo s3 = {13569, "Sandor", 1.2};
    studentInfo s4 = {15467, "Ramsey", 3.1};
    studentInfo s5 = {16285, "Arya", 3.1};

    studentList.InsertItem(s1);
    studentList.InsertItem(s2);
    studentList.InsertItem(s3);
    studentList.InsertItem(s4);
    studentList.InsertItem(s5);


    studentInfo toDelete = {15467, "", 0.0};
    studentList.DeleteItem(toDelete);



       studentInfo toRetrieve = {13569, "", 0.0};
    studentList.RetrieveItem(toRetrieve, found);
    if (found) {

         cout << "Item is found" << endl;
    } else {
        cout << "Item not found" << endl;
    }

    toRetrieve.Print();

    studentList.ResetList();
    cout << "\nList of students: " << endl;
    for (int i = 0; i < studentList.LengthIs(); i++)
    {
        studentInfo student;
        studentList.GetNextItem(student);
        student.Print();
    }

    return 0;
}
