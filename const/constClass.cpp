//
// Created by 尚泽 on 2025/11/19.
//
#include <iostream>
using namespace std;

class constClass {
  const int conMbr;
  int Mbr;

public:
  constClass() : conMbr(0), Mbr(100) {}

  constClass(int i) : conMbr(i) { Mbr = 200; }

  void printConst() {
    cout << "conMbr = " << conMbr << ",Mbr = " << Mbr << endl;
  }

  int getConst() {
    cout << "调用非常量函数" << endl;
    return conMbr;
  }

  int getConst() const {
    cout << "调用常量函数" << endl;
    return conMbr;
  }

  int getValue() { return Mbr; }

  void processConst() {
    cout << "--在processConst函数中非常量--" << endl;
    int x = 2 * conMbr + 1;
    cout << "2*conMbr+1 = " << x << endl;
    Mbr++;
    cout << "Mbr = " << Mbr << endl;
  }

  void processConst() const {
    cout << "--在processConst函数中 常量--" << endl;
    int x = conMbr + 1;
    cout << "x = conMbr + 1 = " << x << endl;
    cout << "Mbr = " << Mbr << endl;
  }
};

// 常引用
class CDemo {
public:
  const int num;
  const int &ref;
  int value;

  CDemo(int i) : num(i), ref(value), value(4) {}
};
