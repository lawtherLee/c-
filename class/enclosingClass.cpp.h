//
// Created by 尚泽 on 2025/11/19.
//
#include <iostream>
using namespace std;

class CTyre
{
private:
    int radius;
    int width;

public:
    CTyre() : radius(16), width(185)
    {
        cout << "无参构造函数CTyre" << endl;
    }

    CTyre(int r, int w) : radius(r), width(w)
    {
        cout << "有参构造函数CTyre" << endl;
    }

    ~CTyre()
    {
        cout << "析构函数~CTyre" << endl;
    }

    int getRadius() const
    {
        return radius;
    }

    int getWidth() const
    {
        return width;
    }
};

class CCar
{
private:
    int price;
    CTyre tyre; // 成员对象
public:
    CCar();
    CCar(int p, int tr, int tw);
    ~CCar();


    int getPrice() const
    {
        return price;
    }

    CTyre getCTyre() const
    {
        return tyre;
    }
};

CCar::CCar()
{
    price = 50000;
    CTyre();
    cout << "无参构造函数CCar" << endl;
}

CCar::CCar(int p, int tr, int tw) : price(p), tyre(tr, tw)
{
    cout << "有参构造函数CCar" << endl;
}

CCar::~CCar()
{
    cout << "析构函数CCar" << endl;
}
