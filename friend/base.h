//
// Created by 尚泽 on 2025/11/25.
//

#ifndef C_BASE_H
#define C_BASE_H
#include <iostream>
using namespace std;

class Pixel; // 前向引用

class Test
{
public:
    void printX(Pixel p);
};

class Pixel
{
private:
    int x, y;

public:
    Pixel(const int x0, const int y0)
    {
        x = x0;
        y = y0;
    }

    void printXY()
    {
        cout << "pixel:(" << x << "," << y << ")" << endl;
    }

    friend double getDist(Pixel p1, Pixel p2); // 友元函数 原型 全局
    friend void Test::printX(Pixel p); // 类 Test 的成员为本类的友元
};

void runPixelFun();
#endif
