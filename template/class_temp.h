//
// Created by ASUS on 2026/1/11.
//

#ifndef C___CLASS_TEMP_H
#define C___CLASS_TEMP_H
#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair
{
public:
    T1 first;
    T2 second;

    Pair(T1 k, T2 v) : first(k), second(v)
    {
    }

    bool operator <(const Pair<T1, T2>& p) const;
};
#endif //C___CLASS_TEMP_H
