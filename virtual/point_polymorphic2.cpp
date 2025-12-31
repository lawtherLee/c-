#include "point_polymorphic2.h"

void runPointPolymorphic2() {
  A *pA;
  A aObj;
  B bObj;

  pA = &aObj;
  pA->putName("名字");

  cout << "pA->printName输出：\t";
  pA->printName();
}