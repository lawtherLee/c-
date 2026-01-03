#ifndef POINT_POLYMORPHIC2_H
#define POINT_POLYMORPHIC2_H

#include <iostream>
#include <string>
using namespace std;

class A {
public:
  string name;
  void putName(const string &name) { this->name = name; };

  virtual void printName() const { cout << "A:" << name << endl; }
};

class B : public A {
public:
  string phoneNum;
  void putName(string name) { A::putName(name); }

  void printName() const override {
    cout << "B::" << name << " , " << A::name << "\n";
  }

  void putPhone(string num) { phoneNum = num; }

  void printPhone() const { cout << phoneNum << "\n"; }
};

void runPointPolymorphic2();
#endif
