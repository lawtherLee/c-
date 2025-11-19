//
// Created by ASUS on 2025/9/27.
//
#include <iostream>
using namespace std;


class Sample
{
public:
    Sample();
    void getValue() const;
    void getValue();
    void priValue() const;
    void priVcon();
};

Sample::Sample()
{
    // cout << "Sample()" << endl;
}

void Sample::getValue() const
{
    cout << "常量成员函数" << endl;
}

void Sample::getValue()
{
    cout << "非常量成员函数" << endl;
}

void Sample::priValue() const
{
    cout << "常量成员函数" << endl;
}

void Sample::priVcon()
{
    cout << "非常量成员函数" << endl;
}


int main()
{
    int a = 3;
    const int a2 = a;
    int* a3 = &a;
    const int* a4 = &a; //指向常量的指针 不能通过这个指针修改它所指向的数据。指针本身可以被重新赋值以指向其他变量
    int* const a5 = &a; // 常量指针 初始化后不能改变其指向 可以通过这个指针修改它所指向的数据

    int const* const a6 = &a;
    const int* const a7 = &a;

    const Sample cono;
    Sample o;
    cout << "cono\t";

    cono.getValue();
    o.getValue(); // 非常量函数
    o.priValue(); // 常量函数


    return 0;
}
