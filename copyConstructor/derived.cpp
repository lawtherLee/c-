//
// Created by 尚泽 on 2025/12/26.
//

#include "derived.h"

int A::getValue() const
{
    return i;
}

void A::setValue(int x)
{
    i = x;
}

float B::getValue() const
{
    return f;
}

void run_derived()
{
    A a;
    const B b;
    B bb(b);
}
