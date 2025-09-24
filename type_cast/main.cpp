//
// Created by 尚泽 on 2025/9/24.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    const int* p = &a;
    const int ca = 30;
    int* q;
    cout << "a的地址是：" << &a << "值为：" << a << endl;
    cout << "p指针指向的地址是：" << p << "值为：" << *p << endl;
    q = const_cast<int*>(p);
    *q = 20;
    cout << "a的地址是：" << &a << "值为：" << a << endl;
    cout << "p指针指向的地址是：" << p << "值为：" << *p << endl;
    cout << "q指针指向的地址是：" << q << "值为：" << *q << endl;
    cout << "-------------------------华丽的分界线-----------------------------";
}
