//
// Created by 尚泽 on 2025/11/25.
//

#include "base.h"
#include <cmath>

void Test::printX(Pixel p)
{
    cout << "x = " << p.x << "\t y = " << p.y << endl;
}

double getDist(Pixel p1, Pixel p2)
{
    double xd = double(p1.x - p2.x);
    double yd = double(p1.y - p2.y);
    return sqrt(xd * xd + yd * yd); // 两点距离
}

void runPixelFun()
{
    Pixel p1(0, 0), p2(10, 10);
    p1.printXY();
    p2.printXY();
    cout << "p1,p2的距离= " << getDist(p1, p2) << endl; // 直接调用全局函数
    Test t;
    cout << "从友元函数中输出" << endl;
    t.printX(p1);
    t.printX(p2);
}
