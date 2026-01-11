//
// Created by ASUS on 2026/1/10.
//

#ifndef C___OPJECT_SWAP_H
#define C___OPJECT_SWAP_H

#include <iostream>
using namespace std;

template <class T>
void Swap(T& x, T& y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

class MyDate
{
private:
    int year, month{}, day{};

public:
    MyDate();
    MyDate(int, int, int);
    void printDate() const;
};

void runMyDate();

#endif //C___OPJECT_SWAP_H
