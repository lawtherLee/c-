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
            p = new int(*tempp.p);
        }
    }

    ~pointer()
    {
        if (p != NULL) delete p;
    }

    pointer& operator=(const pointer& c)
    {
        if (this == &c) return *this;
        delete this->p;
        this->p = new int(*c.p);
        return *this;
    };
};

void runShallowCopy();
#endif
