//
// Created by 尚泽 on 2025/10/30.
//
#include <iostream>
using namespace std;

class Samp
{
public:
    void Setij(int a, int b)
    {
        i = a;
        j = b;
    }

    int GetMuti()
    {
        return i * j;
    }

    ~Samp()
    {
        cout << "Destructor called" << endl;
    }

private:
    int i;
    int j;
};

int main()
{
    Samp* p = new Samp[5];
    if (!p)
    {
        cout << "内存分配错误\n" << endl;
        return 1;
    }
    for (int j = 0; j < 5; j++)
        p[j].Setij(j, j);
    for (int k = 0; k < 5; k++)
        cout << p[k].GetMuti() << endl;
    delete[] p;
}
