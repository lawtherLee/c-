//
// Created by 尚泽 on 2025/12/19.
//
// 访问静态成员
#include <iostream>
using namespace std;

class Base
{
private:
    float x;

public:
    static int staV;

    Base()
    {
        staV++;
    }
};

int Base::staV = 0; // 必须显示初始化

class Derived : public Base
{
private:
    float y;

public:
    Derived()
    {
        staV++;
    }
};

void runStatic()
{
    Base a;
    cout << a.staV << endl;
    Derived d;
    cout << d.staV << endl;
}
