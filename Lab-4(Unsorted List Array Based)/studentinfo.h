#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class studentInfo {
public:
    studentInfo();
    studentInfo(int id, std::string name, float cgpa);

    void Print();

    bool operator==(const studentInfo& other) const;
    bool operator!=(const studentInfo& other) const;

private:
    int studentID;
    string studentName;
    float studentCGPA;
};

#endif // STUDENTINFO_H_INCLUDED
