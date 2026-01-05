#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

inline void outputInt() {
  int n = 65535, m = 20;
  // 输出n的十进制、十六进制和八进制表示
  cout << "1)" << n << "=" << hex << n << "=" << oct << n << endl;
  // 使用setbasc分别输出十进制、十六进制、8进制
  cout << "2)" << setbase(10) << m << "=" << setbase(16) << m << "="
       << setbase(8) << m << endl;
  // 输出m的十进制、十六进制、8进制表示，要求在输出结果中显示进制前缀
  cout << "3)" << showbase;
  cout << setbase(10) << m << "=" << setbase(16) << m << "=" << setbase(8) << m
       << endl;
}

inline void outputFloat() {
  double x = 1234567.89, y = 1.23456789;
  cout << "无格式\t1)" << "x=" << x << ", y=" << y << endl;
  cout << "保留5位有效数字\t2)x=(" << setprecision(5) << x << "),y=(" << y
       << ")\n";
  cout << "保留小数点后5位\t3)x=(" << fixed << setprecision(5) << x << "),y=("
       << y << ")\n";
  cout << "科学计数法，且保留小数点后5位\t4)x=(" << scientific
       << setprecision(5) << x << "),y=(" << y << ")\n";
  cout << "非负数显示正号，输出宽度为12字符，宽度不足用*填补\t5)x=(" << setw(12)
       << setfill('*') << showpos << x << "),y=(" << y << ")\n";

  cout << "非负数不显示正好 宽度12 不足右边用填充字符填充\t6)x=(" << setw(12)
       << left << noshowpos << x << "),y=(" << y << ")\n";

  cout << "宽度不足，符号和数字分列左右 中间用字符填充\t7)x=(" << setw(12)
       << internal << showpos << x << "),y=(" << y << ")\n";
}