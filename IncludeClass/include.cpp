//
// Created by 尚泽 on 2025/12/30.
//

#include "include.h"

void run_include() {
  A ca;
  B cb;
  ca.bPoint = &cb;
  cout << "ca.bPoint = " << ca.bPoint << endl;
  cout << "cb Addr = " << &cb << endl;
  cout << "ca.aInt = " << ca.aInt << endl;
  cout << "cb.aCla.aInt = " << cb.aCla.aInt << endl;
  cout << "cb.bInt = " << cb.bInt << endl;
  ca.setValue(10);
  cb.setValue(20);
  cb.aCla = ca;
  cout << "-------------------------------------------" << endl;
  cout << "ca.bPoint = " << ca.bPoint << endl;
  cout << "ca.aInt = " << ca.aInt << endl;
  cout << "cb.aCla.aInt = " << cb.aCla.aInt << endl;
  cout << "cb.bInt = " << cb.bInt << endl;
}
