//
// Created by ASUS on 2026/1/10.
//

#include "opject_swap.h"

MyDate::MyDate()
{
    year = 1970;
    month = 1;
    day = 1;
}

MyDate::MyDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void MyDate::printDate() const
{
    cout << year << "-" << month << "-" << day << " ";
}

void runMyDate()
{
    int n = 1, m = 2;
    Swap(n, m);
    double f = 1.2, g = 2.3;
    Swap(f, g);
    MyDate d1, d2(2000, 1, 1);
    Swap(d1, d2);
}
