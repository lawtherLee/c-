//
// Created by 尚泽 on 2025/12/24.
//

#ifndef C___VISITS_H
#define C___VISITS_H
#include <iostream>
using namespace std;

class CB1
{
public:
    int a;

    CB1(int x) : a(x)
    {
    }

    void showa()
    {
        cout << "Class CB1 a = " << a << endl;
    }
};

class CB2
{
public:
    int a;

    CB2(int x)
    {
        a = x;
    }

    void showa()
    {
        cout << "Class CB2 a = " << a << endl;
    }
};

class CD : public CB1, public CB2
{
public:
    int a;

    CD(int x, int y, int z) : CB1(x), CB2(y), a(z)
    {
    };

    void showa() const
    {
        cout << "Class CD a = " << a << endl;
    }

    void show3a()
    {
        cout << "Class CD a = " << a << endl;
        CB1::showa();
        CB2::showa();
    }
};

void run_visits();

#endif //C___VISITS_H
