#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

inline void runSetIosFlags() {
  double x = 12.34;
  cout << "1)" << setiosflags(ios::scientific | ios::showpos) << x << endl;
  cout << "2)" << setiosflags(ios::fixed) << x << endl;
  cout << "3)" << resetiosflags(ios::fixed)
       << setiosflags(ios::scientific | ios::showpos) << x << endl;
  cout << "4)" << resetiosflags(ios::showpos) << x
       << endl; // 清除要输出正号的标志
}