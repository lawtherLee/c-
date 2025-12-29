#include "constructor.h"

BaseClass1::BaseClass1() : v1(0), v2(0)
{
  cout << "调用基类BaseClass1默认构造函数" << endl;
}

BaseClass1::BaseClass1(int v1, int v2)
{
  this->v1 = v1;
  this->v2 = v2;
  cout << "调用基类BaseClass1有2参构造函数" << endl;
}

BaseClass1::~BaseClass1() { cout << "调用基类BaseClass1析构函数" << endl; }

void BaseClass1::SetValue(int v1, int v2)
{
  this->v1 = v1;
  this->v2 = v2;
}

void BaseClass1::print() const
{
  cout << "v1 = " << v1 << endl;
  cout << "v2 = " << v2 << endl;
}

BaseClass2::BaseClass2() : v1(1), v4(1)
{
  cout << "调用基类BaseClass2默认构造函数" << endl;
}

BaseClass2::BaseClass2(int v1, int v4)
{
  this->v1 = v1;
  this->v4 = v4;
  cout << "调用基类BaseClass2有2参构造函数" << endl;
}

BaseClass2::~BaseClass2() { cout << "调用基类BaseClass2析构函数" << endl; }

void BaseClass2::print() const
{
  cout << "v1 = " << v1 << endl;
  cout << "v4 = " << v4 << endl;
}

DerivedClass::DerivedClass() : BaseClass1(0, 0), BaseClass2(0, 0)
{
  cout << "调用派生类DerivedClass默认构造函数" << endl;
}

DerivedClass::DerivedClass(int v3)
{
  this->v3 = v3;
  cout << "调用派生类DerivedClass有1参构造函数" << endl;
}

DerivedClass::DerivedClass(int v1, int v2, int v3, int v4) : BaseClass1(v1, v2), BaseClass2(v1, v4), v3(v3)
{
  cout << "调用派生类DerivedClass有4参构造函数" << endl;
}

DerivedClass::~DerivedClass() { cout << "调用派生类DerivedClass析构函数" << endl; }

void BaseClass2::SetValue(int v1, int v4)
{
  this->v1 = v1;
  this->v4 = v4;
}

void DerivedClass::SetValue(int v1, int v2)
{
  BaseClass1::SetValue(v1, v2);
  BaseClass2::SetValue(-1, -1);
  this->v3 = -1;
}

void DerivedClass::SetValue(int v1, int v2, int v3)
{
  BaseClass1::SetValue(v1, v2);
  BaseClass2::SetValue(2 * v1, 2 * v2);
  this->v3 = v3;
}

void DerivedClass::SetValue(int v1, int v2, int v3, int v4)
{
  BaseClass1::SetValue(v1, v2);
  BaseClass2::SetValue(2 * v1, v4);
  this->v3 = v3;
}

void DerivedClass::print()
{
  BaseClass1::print();
  cout << "v3 = " << v3 << endl;
  BaseClass2::print();
}

void run_constructor()
{
  DerivedClass derivedCla1(1000, 2000, 3000, 4000);
  derivedCla1.print();
}
