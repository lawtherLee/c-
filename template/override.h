//
// Created by ASUS on 2026/1/11.
//

#ifndef C___OVERRIDE_H
#define C___OVERRIDE_H
#include <iostream>
using namespace std;

class myDate
{
private:
    int year, month, day;

public:
    myDate();
    myDate(int year, int month, int day);
    friend ostream& operator<<(ostream& os, const myDate& date);
};

inline myDate::myDate()
{
    year = 1900;
    month = 10;
    day = 1;
}

inline myDate::myDate(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

inline ostream& operator<<(ostream& os, const myDate& date)
{
    os << date.year << "/" << date.month << "/" << date.day;
    return os;
}

template <class T1, class T2>
void print(T1 arg1, T2 arg2)
{
    cout << "不同类型\n" << arg1 << " " << arg2;
}

template <class T>
void print(T arg1, T arg2)
{
    cout << "同一个类型" << arg1 << " " << arg2;
}

inline void runTempOverRide()
{
    int n = 1, m = 2;
    print(n, m);
    myDate d1, d2(2000, 1, 1);
    print(d1, d2);
    print(n, d2);
}
#endif //C___OVERRIDE_H
