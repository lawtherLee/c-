//
// Created by 尚泽 on 2025/12/12.
//

#ifndef C___STREAM_H
#define C___STREAM_H
#include <iostream>
using namespace std;

class myComplex
{
private:
    double real;
    double imag;

public:
    myComplex() : real(0.0), imag(0.0)
    {
    };

    myComplex(double r, double i) : real(r), imag(i)
    {
    }

    friend ostream& operator<<(ostream& os, const myComplex& c);
    friend istream& operator>>(istream& is, myComplex& c);
};

void runIostream();

#endif //C___STREAM_H
