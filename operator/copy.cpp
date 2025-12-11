//
// Created by 尚泽 on 2025/12/11.
//

#include "copy.h"

void runShallowCopy()
{
    pointer p1;
    pointer p2(p1);
    pointer p3 = p1;
    cout << "\n初始化后，各对象值及内存地址" << endl;
    cout << "p1:\t" << &p1 << ", \t" << p1.a << ", \t" << p1.p << ", \t" << *p1.p << ", \t" << &p1.p << endl;
    cout << "p2:\t" << &p2 << ", \t" << p2.a << ", \t" << p2.p << ", \t" << *p2.p << ", \t" << &p2.p << endl;
    cout << "p3:\t" << &p3 << ", \t" << p3.a << ", \t" << p3.p << ", \t" << *p3.p << ", \t" << &p3.p << endl;

    *p1.p = 20;
    p2.a = 300;

    cout << "\n修改后, 各对象的值及内存地址:" << endl;
    cout << "对象名\t对象地址\ta 的值\tp中的值\tp指向的值\tp的地址" << endl;
    cout << "p1:\t" << &p1 << ", \t" << p1.a << ", \t" << p1.p << ", \t" << *p1.p << ", \t" << &p1.p << endl;
    cout << "p2:\t" << &p2 << ", \t" << p2.a << ", \t" << p2.p << ", \t" << *p2.p << ", \t" << &p2.p << endl;
    cout << "p3:\t" << &p3 << ", \t" << p3.a << ", \t" << p3.p << ", \t" << *p3.p << ", \t" << &p3.p << endl;
}
