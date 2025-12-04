//
// Created by 尚泽 on 2025/12/4.
//

#include "myFriendComplex.h"

myFriendComplex::myFriendComplex()
{
    real = 0;
    imag = 0;
}

myFriendComplex::myFriendComplex(double r, double i)
{
    real = r;
    imag = i;
}

myFriendComplex addComp(myFriendComplex c1, myFriendComplex c2)
{
    return myFriendComplex(c1.real + c2.real, c1.imag + c2.imag);
}

void outCom(myFriendComplex c)
{
    cout << "(" << c.real << "," << c.imag << ")";
}

void runMyFriendComplex()
{
    myFriendComplex c1(1, 2), c2(3, 4), res;
    res = addComp(c1, c2); // 直接调用友元函数 不通过类对象
    outCom(c1);
    cout << " + ";
    outCom(c2);
    cout << " = ";
    outCom(res);
    cout << endl;
};
