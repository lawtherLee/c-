//
// Created by 尚泽 on 2025/12/4.
//
#include "myComplex.h"

myComplex::myComplex()
{
    real = 0;
    imag = 0;
}

myComplex::myComplex(double r, double i)
{
    real = r;
    imag = i;
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
    myComplex c1(1, 2), c2(3, 4);
    myComplex res = c1.addCom(c2);
    c1.outCom();
    cout << " + ";
    c2.outCom();
    cout << " = ";
    res.outCom();
    cout << endl;
}
