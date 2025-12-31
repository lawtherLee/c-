
#ifndef POINT_POLYMORPHIC_H
#define POINT_POLYMORPHIC_H

#include <iostream>
using namespace std;

class A {
public:
  virtual void print() { cout << "A::print()" << endl; }
};

class B : public A {
public:
  virtual void print() { cout << "B::print()" << endl; }
};

class D : public A {
public:
  virtual void print() { cout << "D::print()" << endl; }
};

class E : public B {
public:
  virtual void print() { cout << "E::print()" << endl; }
};

void runPointPolymorphic();
#endif