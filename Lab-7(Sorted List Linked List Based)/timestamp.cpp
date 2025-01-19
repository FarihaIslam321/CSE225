#include "timestamp.h"
#include <iostream>

using namespace std;

timeStamp::timeStamp()
{
   h=0;
    m=0;
    s=0;

}
timeStamp::timeStamp(int h, int m, int s)
{
    this->h=h;
    this->m=m;
    this->s=s;
}

void timeStamp::print()
{
    cout<<h<<" : "<<m<<" : "<<s<<endl;
}
bool timeStamp::operator>(timeStamp t)
{
    int s1 = h*3600+m*60+s;
    int s2 = t.h*3600+t.m*60+t.s;
    return s1>s2;
}
bool timeStamp::operator<(timeStamp t)
{
    int s1 = h*3600+m*60+s;
    int s2 = t.h*3600+t.m*60+t.s;
    return s1<s2;
}
bool timeStamp::operator!=(timeStamp t)
{
    int s1 = h*3600+m*60+s;
    int s2 = t.h*3600+t.m*60+t.s;
    return s1!=s2;
}
bool timeStamp::operator==(timeStamp t)
{
     int s1 = h*3600+m*60+s;
    int s2 = t.h*3600+t.m*60+t.s;
    return s1==s2;
}
