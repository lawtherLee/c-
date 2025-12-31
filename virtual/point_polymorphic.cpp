#include "point_polymorphic.h"

void runPointPolymorphic() {
  A a;
  B b;
  D d;
  E e;

  A *pa = &a;
  B *pb = &b;
  pa->print();
  pa = pb;
  pa->print();

  pa = &d;
  pa->print();
}