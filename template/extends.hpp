#include <iostream>
#include <string>
using namespace std;

// 普通类继承模版类
template <class T> class TBase {
  T data;

public:
  void print() { cout << data << endl; }
};

class Derived : public TBase<int> {};

inline void runTemp2General() {
  Derived d;
  d.print();
}

// 类模版继承普通类
class Base {
  int k;

public:
  void print() { cout << "Base::" << k << endl; }
};

template <class T> class TDerived : public Base {
  T data;

public:
  void setData(T x) { data = x; }
  void print() {
    Base::print();
    cout << "TDerived::" << data << endl;
  }
};

inline void runGeneral2Temp() {
  TDerived<string> d;
  d.setData("Hello");
  d.print();
}

// 类模版继承类模版
template <class T> class TBase1 {
  T data1;

public:
  void print() { cout << "TBase1::" << data1 << endl; }
};
template <class T1, class T2> class TDerived1 : public TBase1<T1> {
  T2 data2;

public:
  void print() {
    TBase1<T1>::print();
    cout << "TDerived1::" << data2 << endl;
  }
};
inline void runTemp2Temp() {
  TDerived1<int, int> d;
  d.print();
  TDerived1<string, string> d2;
  d2.print();
}

// 类模版继承模版类
template <class T> class TBase2 {
  T data1;

public:
  void print() { cout << "TBase2::" << data1 << endl; }
};
// 类模版继承模版类，指定模版参数
template <class T1> class TDerived2 : public TBase2<int> {
  T1 data2;

public:
  void print() {
    TBase2<int>::print();
    cout << "TDerived2::" << data2 << endl;
  }
};

inline void runTemp2TempClass() {
  TDerived2<int> d;
  d.print();
  TDerived2<string> d2;
  d2.print();
}