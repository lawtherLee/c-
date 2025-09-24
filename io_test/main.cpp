//
// Created by 尚泽 on 2025/9/24.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int oneInt1, oneInt2;
    char strArray[20];
    double oneDouble;
    char oneChar = 'a';
    cout << "输入两个整型，一个字符，一个字符串和一个浮点值";
    cout << "以空格 tab 回车分隔" << endl;
    cin >> oneInt1 >> oneInt2 >> oneChar >> strArray >> oneDouble;
    const string str = strArray;

    cout << "输入的数据是：" << endl
        << "字符串是：\t\t" << str << endl
        << "两个整型分别是 \t" << oneInt1 << ",\t" << oneInt2 << endl
        << "字符是：\t\t" << oneChar << "\n"
        << "浮点是：\t\t" << oneDouble << endl;
    return 0;
}
