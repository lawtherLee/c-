//
// Created by 尚泽 on 2025/11/25.
//

#ifndef C___COPYCONSTRUCT_H
#define C___COPYCONSTRUCT_H
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "default" << endl;
    }

    A(const A& a)
    {
        cout << "copy" << endl;
    }
};

class B
{
    A a;
};
#endif //C___COPYCONSTRUCT_H
