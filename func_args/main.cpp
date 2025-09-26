//
// Created by 尚泽 on 2025/9/25.
//
#include <iostream>
using namespace std;

void SwapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "SwapValue: a = " << a << " b = " << b << endl;
}

void SwapRef(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "SwapRef: a = " << a << " b = " << b << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "main: a = " << a << " b = " << b << endl;
    SwapValue(a, b);
    cout << "调用SwapValue: a = " << a << " b = " << b << endl;
    a = 10;
    b = 20;
    SwapRef(a, b);
    cout << "调用SwapRef: a = " << a << " b = " << b << endl;
    return 0;
}
