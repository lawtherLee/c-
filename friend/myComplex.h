//
// Created by 尚泽 on 2025/12/4.
// 成员函数版
//

#ifndef C_MYCOMPLEX_H
#define C_MYCOMPLEX_H
#include <iostream>
using namespace std;

class myComplex
{
private:
    double real, imag;

public:
    myComplex();
    myComplex(double r, double i);
    myComplex AddRealOne();
    myComplex AddImagOne();
    myComplex addCom(myComplex c);
    void outCom();

    myComplex operator-(const myComplex& c);
    friend myComplex operator+(const myComplex& c1, const myComplex& c2);

    myComplex& operator=(const myComplex& c);
    myComplex& operator=(double);
};

void runMyComplex();

#endif
