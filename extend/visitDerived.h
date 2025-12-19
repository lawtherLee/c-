//
// Created by 尚泽 on 2025/12/19.
// 访问基类和派生类成员

#ifndef C___VISITDERIVED_H
#define C___VISITDERIVED_H


class CB
{
public:
    int a;

    CB(int x)
    {
        a = x;
    }

    void showA() const;
};

class CD : public CB
{
public:
    int a;

    CD(int x, int y) : CB(x)
    {
        a = y;
    }

    void showA() const;

    void print2a() const;
};

void runVisitDerived();


#endif //C___VISITDERIVED_H
