//
// Created by 尚泽 on 2025/12/25.
//

#ifndef C___COMPATIBILITY_H
#define C___COMPATIBILITY_H
#include <iostream>
using namespace std;

class A
{
    int an;

public:
    A()
    {
    };

    A(int n)
    {
        an = n;
    }

    void showa() const
    {
        cout << "A的对象：";
        cout << "an:" << an;
    }

    void showan() const
    {
        cout << "an:" << an;
    }
};

class B : public A
{
    int bn;

public:
    B(int n) : A(2 * n)
    {
        bn = n;
    }

    void showb() const
    {
        cout << "B的对象：";
        A::showan();
        cout << "bn:" << bn << endl;
    }
};

void run_compatibility();


#endif //C___COMPATIBILITY_H
