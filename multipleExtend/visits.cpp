//
// Created by 尚泽 on 2025/12/24.
//

#include "visits.h"
#include <iostream>
using namespace std;

void run_visits()
{
    CB1 CBobj(11);
    CBobj.showa();
    CD CDobj(11, 22, 33);
    CDobj.show3a();

    cout << CDobj.a << endl;
    cout << CDobj.CB1::a << endl; // 不会产生二义性
}
