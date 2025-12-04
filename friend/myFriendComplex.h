//
// Created by 尚泽 on 2025/12/4.
//

#ifndef C_MYFRIENDCOMPLEX_H
#define C_MYFRIENDCOMPLEX_H
#include <iostream>
using namespace std;

class myFriendComplex
{
private:
    double real;
    double imag;

public:
    myFriendComplex();
    myFriendComplex(double r, double i);
    friend myFriendComplex addComp(myFriendComplex c1, myFriendComplex c2);
    friend void outCom(myFriendComplex c);
};

void runMyFriendComplex();

#endif
