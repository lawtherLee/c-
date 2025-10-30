//
// Created by 尚泽 on 2025/10/30.
//

#include <iostream>
using namespace std;

class classA
{
public:
    double x, y;
    static int num;

    classA()
    {
        x = 0;
        y = 0;
        num++;
    }

    classA(double x0, double y0)
    {
        x = x0;
        y = y0;
        num++;
    }

    static void staticFun()
    {
        cout << "current_num" << num << endl;
    }
};

int classA::num = 0;

int main()
{
    classA obj(1.2, 3.4), *p;
    return 0;
}
