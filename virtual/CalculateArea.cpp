//
// Created by ASUS on 2026/1/2.
//

#include "CalculateArea.h"

void CShape::printInfo()
{
    cout << "图形面积：" << acreage << endl;
}

double CRectangle::calArc()
{
    return width * height;
}

void CRectangle::printInfo()
{
    cout << "矩形。\t宽度：" << width << "高度：" << height << "\t面积：" << acreage << endl;
}

void CRectangle::setAcreage(double acre)
{
    acreage = acre;
}

double CCircle::calArc()
{
    return radius * radius * 3.14;
}

void CCircle::printInfo()
{
    cout << "圆形。\t半径：" << radius << "\t面积：" << acreage << endl;
}

void CCircle::setAcreage(double acre)
{
    acreage = acre;
}

double CTriangle::calArc()
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c)); // 海伦公式
}

void CTriangle::printInfo()
{
    cout << "三角形。\t边长：" << a << "," << b << "," << c << "\t面积：" << acreage << endl;
}

void CTriangle::setAcreage(double acre)
{
    acreage = acre;
}

CShape* pShape[100];

void runCalculater()
{
    int i, n;
    double temp1, temp2, temp3;
    CRectangle* pr;
    CCircle* pc;
    CTriangle* pt;
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        switch (c)
        {
        case 'R':
        case 'r':
            cin >> temp1 >> temp2;
            pr = new CRectangle(temp1, temp2);
            pr->setAcreage(pr->calArc());
            pShape[i] = pr;
            break;
        case 'C':
        case 'c':
            cin >> temp1;
            pc = new CCircle(temp1);
            pc->setAcreage(pc->calArc());
            pShape[i] = pc;
            break;
        case 'T':
        case 't':
            cin >> temp1 >> temp2 >> temp3;
            pt = new CTriangle(temp1, temp2, temp3);
            pt->setAcreage(pt->calArc());
            pShape[i] = pt;
            break;
        default: ;
        }
    }

    if (n == 1) cout << "共有" << n << "个图形。它是：" << endl;
    else cout << "共有" << n << "个图形。分别是：" << endl;

    for (i = 0; i < n; ++i)
    {
        pShape[i]->printInfo();
        delete pShape[i];
    }
}
