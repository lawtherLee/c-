//
// Created by 尚泽 on 2025/12/26.
// 基类与派生的构造与析构函数
//

#ifndef C___BASEDERIVE_H
#define C___BASEDERIVE_H


class BaseClass
{
protected:
    int v1{}, v2{};

public:
    BaseClass();
    BaseClass(int, int);
    ~BaseClass();
};

class DerivedClass : public BaseClass
{
    int v3{};

public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int);
    ~DerivedClass();
};

void run_base_derive();
#endif //C___BASEDERIVE_H
