//
// Created by ASUS on 2026/1/11.
//

#ifndef C___CLASS_TEMP_H
#define C___CLASS_TEMP_H
#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2> class Pair {
public:
  T1 first;
  T2 second;

  Pair(T1 k, T2 v) : first(k), second(v) {}

  bool operator<(const Pair<T1, T2> &p) const;
};
template <class T1, class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const {
  return first < p.first;
}

inline void runPair() {
  Pair<string, int> student("张三", 18);
  Pair<string, int> student2("李四", 19);

  Pair<int, int> coordinate(10, 20);

  Pair<string, string> dic("hello", "你好");
  cout << "学生：" << student.first << " " << student.second << endl;
  cout << "学生：" << student2.first << " " << student2.second << endl;
  cout << "坐标：" << coordinate.first << " " << coordinate.second << endl;
  cout << "字典：" << dic.first << " " << dic.second << endl;
  bool a = student < student2;
  if (a == 0) {
    cout << student.first << "位于" << student2.first << "之后" << endl;
  } else {
    cout << student.first << "位于" << student2.first << "之前" << endl;
  }
}

template <class T> class TestClass {
public:
  T buffer[10];
  T getData(int j);
};
template <class T> T TestClass<T>::getData(int j) {
  // 数组名隐式转换为指针 同buffer[j]
  return *(buffer + j);
}

inline void runTestClass() {
  TestClass<char> ClassInstA;
  int i;
  char cArr[6] = "abcde";
  for (i = 0; i < 5; i++) {
    ClassInstA.buffer[i] = cArr[i];
  }
  for (i = 0; i < 5; i++) {
    char res = ClassInstA.getData(i);
    cout << res << "  ";
  }
  cout << endl;

  TestClass<double> ClassInstF;
  double fArr[6] = {12.1, 23.2, 34.3, 45.4, 56.5, 67.6};
  for (i = 0; i < 6; i++) {
    ClassInstF.buffer[i] = fArr[i] - 10;
  }
  for (i = 0; i < 6; i++) {
    double res = ClassInstF.getData(i);
    cout << res << "  ";
  }
  cout << endl;
}

#endif // C___CLASS_TEMP_H
