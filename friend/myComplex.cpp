//
// Created by 尚泽 on 2025/12/4.
//
#include "myComplex.h"

myComplex::myComplex()
{
    real = 0;
    imag = 0;
}

myComplex::myComplex(double real, double i)
{
    this->real = real;
    imag = i;
}

myComplex myComplex::AddImagOne()
{
    this->real++;
    return *this; // 返回对象本身
}

myComplex myComplex::AddRealOne()
{
    this->imag++;
    return *this; // 返回对象本身
}

myComplex myComplex::addCom(myComplex c)
{
    return myComplex(real + c.real, imag + c.imag);
}

void myComplex::outCom()
{
    cout << "(" << real << "," << imag << ")";
}

void runMyComplex()
{
    myComplex c1(1, 2), c2(3, 4), c3;
    myComplex res = c1.addCom(c2);
    c1.outCom();
    cout << " + ";
    c2.outCom();
    cout << " = ";
    res.outCom();
    cout << endl << "我是分界线" << endl;
    c3 = res.AddRealOne();
    c3.outCom();
}
