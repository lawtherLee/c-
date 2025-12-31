//
// Created by 尚泽 on 2025/12/30.
//

#include "transfer.h"

void run_transfer() {
  CDerived objDerived(3);
  CBase objBase(5);
  CBase *pBase = &objDerived;       // 指向派生类对象的基类指针
  CDerived *pDerived = &objDerived; // 指向派生类对象的指针
  cout << "使用派生类指针调用函数" << endl;
  pDerived->print();
  pBase = pDerived; // 基类指针指向派生类对象
  cout << "使用基类指针调用函数" << endl;
  pBase->print();
  // 基类指针只能调用基类的成员函数
  // // pBase->func(); // 错误，基类指针不能调用派生类的成员函数
  // // pDerived = pBase; // 错误，派生类指针不能指向基类对象
  pDerived = (CDerived *)pBase; // 强制类型转换，将基类指针转换为派生类指针
  pDerived->print();
}
