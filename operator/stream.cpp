//
// Created by 尚泽 on 2025/12/12.
//

#include "stream.h"
#include <string>
#include <cstdlib>
using namespace std;

ostream operator<<(ostream& os, const myComplex& c)
{
    if (c.imag >= 0)
        os << c.real << "+" << c.imag << "i";
    else
        os << c.real << "-" << -c.imag << "i";
    return os;
}

istream& operator>>(istream& is, myComplex& c)
{
    string s;
    is >> s;
    int pos = s.find('+', 0);
    if (pos == -1) pos = s.find('-', 1);

    string sReal = s.substr(0, pos);
    c.real = atof(sReal.c_str()); // 将参数内容转换浮点数

    sReal = s.substr(pos, s.length() - pos - 1);
    c.imag = atof(sReal.c_str());

    return is;
}

void runIostream()
{
};
