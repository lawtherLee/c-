//
// Created by 尚泽 on 2025/12/17.
//

#include "Increment.h"
#include <iostream>
using namespace std;

Increment& Increment::operator++()
{
    n += 2;
    return *this;
}

Increment Increment::operator++(int k)
{
    const Increment temp(*this); // 记录修改前的对象
    n++;
    return temp; // 返回
}

Increment& operator--(Increment& d)
{
    d.n--;
    return d;
}

Increment operator--(Increment& d, int)
{
    Increment temp(d);
    d.n--;
    return temp;
}

void runIncrement()
{
    Increment d(10);
    cout << d++ << endl; // d.operator++(0)
    cout << d << endl;
    cout << ++d << endl;
    cout << d << endl;
    cout << d-- << endl; // 12 d.operator--(d,0)
    cout << d << endl; // 11
    cout << --d << endl; //10
    cout << d << endl; // 10
}
