//
// Created by 尚泽 on 2025/9/29.
//
#include<string.h>
#include <iostream>

using namespace std;

int main()
{
    string str;
    if (str.empty())
        cout << "str is empty" << ",len= " << str.length() << endl;
    else
        cout << "str is not empty" << ",len= " << str.length() << endl;
}

