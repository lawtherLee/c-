//
// Created by 尚泽 on 2025/12/30.
//

#ifndef C___TRANSFER_H
#define C___TRANSFER_H
#include <iostream>
using namespace std;

class CBase {
protected:
  int n;

public:
  CBase(int i) : n(i) {}
  void print() { cout << "CBase.n = " << n << endl; }
};

class CDerived : public CBase {
public:
  int v;
  CDerived(int i) : CBase(i), v(2 * i) {}
  void print() {
    cout << "CDerived.n = " << n << endl;
    cout << "CDerived.v = " << v << endl;
  }
  void func() {}
};

void run_transfer();

#endif // C___TRANSFER_H