//
// Created by 尚泽 on 2025/12/18.
// 派生继承友元函数
//

#ifndef C___DERIVED_H
#define C___DERIVED_H
#include <iostream>
using namespace std;
class another;

class Base
{
private:
    float x;

public:
    void print(const another& k);
};

class derived : public Base
{
private:
    float y;
};

class another
{
private:
    int aaa;

public:
    another()
    {
        aaa = 100;
    }

    friend void Base::print(const another& k); // 基类的成员声明为本类的友元
};

inline void Base::print(const another& k)
{
    cout << "Base:" << k.aaa << endl;
}

inline void runDerived()
{
    Base a;
    derived d;
    another ano;
    a.print(ano);
    d.print(ano);
}
#endif //C___DERIVED_H
