//
// Created by 尚泽 on 2025/12/26.
//

#include "baseDerive.h"
#include <iostream>
using namespace std;

BaseClass::BaseClass()
{
    cout << "基类无参构造函数" << endl;
}

BaseClass::BaseClass(const int a, const int b)
{
    v1 = a;
    v2 = b;
    cout << "基类有2参构造函数" << endl;
}

BaseClass::~BaseClass()
{
    cout << "基类析构函数" << endl;
}

DerivedClass::DerivedClass()
{
    cout << "派生类无参构造函数" << endl;
}

DerivedClass::DerivedClass(const int a) : v3(a)
{
    cout << "派生类有1参构造函数" << endl;
}

DerivedClass::DerivedClass(int m, int n, int k) : BaseClass(m, n), v3(k)
{
    cout << "派生类有3参构造函数" << endl;
}

DerivedClass::~DerivedClass()
{
    cout << "派生类析构函数" << endl;
}

void run_base_derive()
{
    BaseClass baseCla;
    DerivedClass deriveCla;

    BaseClass baseCla1(1, 2);
    DerivedClass deriveCla1(3);
}
