//
// Created by 尚泽 on 2025/12/17.
//

#ifndef C___INCREMENT_H
#define C___INCREMENT_H

// 前置表达式 调用参数个数正常的重载函数 后置表达式 调用多一个参数的重载函数
class Increment
{
private:
    int n;

public:
    Increment(int i = 0) : n(i)
    {
    }

    Increment& operator++();
    Increment operator++(int);
    operator int() { return n; };
    friend Increment& operator--(Increment&);
    friend Increment operator--(Increment&, int);
};

void runIncrement();
#endif //C___INCREMENT_H
