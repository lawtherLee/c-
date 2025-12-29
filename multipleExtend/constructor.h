#pragma once
#include <iostream>
using namespace std;

class BaseClass1
{
protected:
  int v1, v2;

public:
  BaseClass1();
  BaseClass1(int, int);
  ~BaseClass1();
  void print() const;
  void SetValue(int v1, int v2);
};

class BaseClass2
{
protected:
  int v1, v4;

public:
  BaseClass2();
  BaseClass2(int, int);
  ~BaseClass2();
  void print() const;
  void SetValue(int, int);
};

class DerivedClass : public BaseClass1, public BaseClass2
{
public:
  int v3{};
  DerivedClass();
  DerivedClass(int);
  DerivedClass(int, int, int, int);
  ~DerivedClass();
  void print();
  void SetValue(int, int);
  void SetValue(int, int, int);
  void SetValue(int, int, int, int);
};

void run_constructor();

