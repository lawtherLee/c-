//
// Created by ASUS on 2025/9/27.
//
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    const int a2 = a;
    int* a3 = &a;
    const int* a4 = &a;
    int* const a5 = &a;

    int const* const a6 = &a;
    const int* const a7 = &a;
    return 0;
}
