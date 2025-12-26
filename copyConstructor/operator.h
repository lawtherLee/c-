//
// Created by 尚泽 on 2025/12/26.
// 复制构造函数和赋值运算符重载演示程序
//

#ifndef C___OPERATOR_H
#define C___OPERATOR_H
#include <iostream>
using namespace std;


class CBase
{
public:
    CBase()
    {
        cout << "调用基类构造函数" << endl;
    };

    CBase(const CBase& c)
    {
        cout << "调用复制构造函数" << endl;
    }


    CBase& operator=(const CBase& c)
    {
        cout << "调用赋值运算符重载函数" << endl;
        return *this;
    }
};

class CDerived : public CBase
{
public:
    CDerived()
    {
    };

    CDerived(const CDerived& c) : CBase(c)
    {
        cout << "调用派生类复制构造函数" << endl;
    }
};


void run_operator();
#endif //C___OPERATOR_H
