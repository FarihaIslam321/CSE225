#include "studentinfo.h"
#include <iostream>
#include <string>

using namespace std;

studentInfo::studentInfo()
{
    studentID=0;
    studentName=" ";
    studentCGPA=0.0;

}
studentInfo::studentInfo(int id, std::string name,float cgpa)
{
    this->studentID=id;
    this->studentName=name;
    this->studentCGPA=cgpa;
}

void studentInfo::Print()
{
    cout << studentID << ", " << studentName << ", " << studentCGPA << endl;
}

bool studentInfo::operator ==(const studentInfo&other)const
{
return studentID==other.studentID;
}

bool studentInfo::operator !=(const studentInfo&other)const
{
return studentID!=other.studentID;
}
