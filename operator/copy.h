//
// Created by 尚泽 on 2025/12/11.
//

#ifndef C_COPY_H
#define C_COPY_H

#include <iostream>
using namespace std;

class pointer
{
public:
    int a;
    int* p;

    pointer()
    {
        a = 100;
        p = new int(10);
    }

    pointer(const pointer& tempp)
    {
        if (this != &tempp)
        {
            a = tempp.a;
            p = tempp.p;
        }
    }
};

void runShallowCopy();
#endif
