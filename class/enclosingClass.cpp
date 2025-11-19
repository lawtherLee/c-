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
    }

    CTyre(int r, int w) : radius(r), width(w)
    {
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
    price = 5000;
    CTyre();
}

CCar::CCar(int p, int tr, int tw) : price(p), tyre(tr, tw)
{
}
