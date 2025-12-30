//
// Created by 尚泽 on 2025/12/30.
//

#ifndef C___INCLUDE_H
#define C___INCLUDE_H
#include <iostream>
using namespace std;

class B;

class A {
public:
  int aInt{};
  B *bPoint = NULL;

  void setValue(int v) { aInt = v; }
};

class B {
public:
  A aCla;
  int bInt{};

  void setValue(int v) { bInt = v; }
};

void run_include();

#endif // C___INCLUDE_H
