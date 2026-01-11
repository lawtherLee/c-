//
// Created by ASUS on 2026/1/10.
//

#ifndef C___OBJECT_SORT_H
#define C___OBJECT_SORT_H
#include <iostream>
#include <string>

#include "opject_swap.h"
using namespace std;

template <typename T>
int myCompare(const T& left, const T& right)
{
    if (left < right) return -1;
    if (left > right) return 1;
    return 0;
}

// template <class T>
// void Swap(T& x, T& y)
// {
//     T temp = x;
//     x = y;
//     y = temp;
// }

inline void runObjSort()
{
    string arraystring[10] = {"shang", "xia", "zuo", "you", "qian", "hou", "dong", "xi", "nan", "bei"};
    int j;
    string temp;
    for (int i = 1; i < 10; ++i)
    {
        j = i;
        while (j > 0 && myCompare<string>(arraystring[j - 1], arraystring[j]) > 0)
        {
            Swap(arraystring[j], arraystring[j - 1]);
            j--;
        }
    }
    for (const auto& i : arraystring)
        cout << i << ",";
}

#endif //C___OBJECT_SORT_H
