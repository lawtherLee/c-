//
// Created by 尚泽 on 2025/11/10.
//
#include <iostream>
#include <string>
using namespace std;

class Demo
{
    int id;
    string position;

public:
    Demo(int i, string pos)
    {
        id = i;
        position = pos;
        cout << "生成对象" << this << ", id = " << id << ", position = " << position << endl;
    }

    Demo(int i) : position("temp")
    {
        id = i;
        cout << "生成对象" << this << ", id = " << id << ", position = " << position << endl;
    }

    ~Demo()
    {
        cout << "消亡对象" << this << ", id = " << id << ", position = " << position << endl;
    }
};

Demo d1(1, "全局");

void Func()
{
    cout << "enter Func" << endl;
    static Demo d2(2, "函数Func内，静态的");
    Demo d3(3, "函数Func内");
    cout << "exit func" << endl;
}

int main()
{
    cout << "enter main" << endl;
    Demo d4(4, "主函数内");
    d4 = 7;
    cout << "exit block" << endl;
    {
        Demo d5(5, "主函数块内");
    }
    cout << "exit block" << endl;
    static Demo d6(6, "主函数内，静态的");
    Func();

    return 0;
}
