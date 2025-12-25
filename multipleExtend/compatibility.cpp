//
// Created by 尚泽 on 2025/12/25.
//

#include "compatibility.h"
#include <iostream>
using namespace std;

void run_compatibility()
{
    A a(10);
    B b(20);
    // a = b;
    a.showa();
    b.showb();
    a = b;
    a.showa();
    b.showb();
};
