#include "point_polymorphic2.h"

void runPointPolymorphic2()
{
  A* pA;
  A aObj;
  B bObj;

  pA = &aObj;
  pA->putName("a");

  cout << "pA->printName输出：\t";
  pA->printName();
  cout << "aObj.printName输出：\t";
  aObj.printName();

  pA = &bObj;
  pA->putName("另一个名字");
  cout << "pA->printName输出：\t";
  pA->printName();

  cout << "bObj.printName输出：\t";
  bObj.printName();
  bObj.putPhone("123456789");
  cout << "(B*)pA->printPhone输出：\t";
  // ((B*)pA)->printPhone(); 基础写法
  dynamic_cast<B*>(pA)->printPhone();
}
