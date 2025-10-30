//
// Created by ASUS on 2025/10/12.
//
#include <iostream>
using namespace std;

class Demo
{
    int id;

public:
    Demo(int i)
    {
        id = i;
        cout << "id=" << id << "构造函数" << endl;
    }

    void printDemo();

    ~Demo()
    {
        cout << "id=" << id << "析构函数" << endl;
    }
};

void Demo::printDemo()
{
    cout << "id=" << id << endl;
}

int main()
{
    Demo d1(1);
    d1.printDemo();
    d1 = 6;
    // d1.printDemo();
    return 0;
}
