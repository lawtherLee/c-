//
// Created by 尚泽 on 2025/12/26.
//

#ifndef C___DERIVED_H
#define C___DERIVED_H
#include <iostream>
using namespace std;

class A
{
private:
    int i;

public:
    A()
    {
        i = 100;
        cout << "类A的默认构造函数" << endl;
    }

    A(const A& s) // 复制构造函数
    {
        i = s.i;
        cout << "类A的复制构造函数" << endl;
    }

    int getValue() const;
    void setValue(int);
};

class B : public A
{
private:
    float f{};

public:
    B()
    {
        f = 20.1;
        cout << "类B的默认构造函数" << endl;
    }

    B(const B& v) : A::A(v), f(v.f)
    {
        cout << "类B的复制构造函数" << endl;
    }

    float getValue() const;

    int getAValue() const
    {
        return A::getValue();
    };
};

void run_derived();
#endif //C___DERIVED_H
