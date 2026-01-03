//
// Created by ASUS on 2026/1/2.
//

#ifndef C___CALCULATEAREA_H
#define C___CALCULATEAREA_H
#include <iostream>
#include <cmath>
using namespace std;

class CShape
{
protected:
    double acreage{};

public:
    CShape() = default;
    virtual ~CShape() = default;

    virtual double calArc() = 0; // 计算面积的虚函数
    virtual void setAcreage(double acre) // 设置面积的虚函数
    {
    }

    virtual void printInfo();
};

class CRectangle : public CShape
{
    double width{}, height{};

public:
    CRectangle() = default;

    CRectangle(const double w, const double h) : width(w), height(h)
    {
    }

    ~CRectangle() override = default;
    double calArc() override;
    void printInfo() override;
    void setAcreage(double acre) override;
};

class CCircle : public CShape
{
    double radius{};

public:
    CCircle()
    {
        radius = 0;
    }

    CCircle(double r) : radius(r)
    {
    };
    ~CCircle() override = default;
    double calArc() override;
    void setAcreage(double acre) override;
    void printInfo() override;
};

class CTriangle : public CShape
{
    double a{}, b{}, c{};

public:
    CTriangle() = default;

    CTriangle(const double a1, const double b1, const double c1) : a(a1), b(b1), c(c1)
    {
    }

    ~CTriangle() override = default;
    double calArc() override;
    void printInfo() override;
    void setAcreage(double acre) override;
};

void runCalculater();
#endif //C___CALCULATEAREA_H
