//
// Created by 尚泽 on 2025/12/19.
//

#include "visitDerived.h"
#include <iostream>
using namespace std;

void CB::showA() const
{
    cout << "Class CB--a = " << a << endl;
}

void CD::showA() const
{
    cout << "Class CD--a = " << a << endl;
}

void CD::print2a() const
{
    cout << "a = " << a << endl;
    cout << "CB::a = " << a << endl;
}

void runVisitDerived()
{
    CB CBobj(12);
    CBobj.showA();
    CD CDobj(48, 999);
    CDobj.showA();
    CDobj.CB::showA(); // 派生访问基类
}
