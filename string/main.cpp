//
// Created by 尚泽 on 2025/9/29.
//
#include <cstring>
#include <iostream>
#include <string>


using namespace std;

int main() {
  std::string str;
  if (str.empty())
    cout << "str is empty" << ",len= " << str.length() << endl;
  else
    cout << "str is not empty" << ",len= " << str.length() << endl;

  str = str.append("abcdefg");
  cout << "str is " << str << ", size=" << str.size() << endl;

  const char *p = str.c_str();
  cout << "p=" << p << endl;
  cout << "find:de=" << str.find("de", 0) << endl;
  cout << "find:de=" << str.find("de", 4) << endl;

  std::string str1 = str.insert(4, "123");
  cout << "str1=" << str1 << endl;

  std::string s1 = "C++语言";
  s1[0] = 'j';
  cout << "s1=" << s1 << endl;

  std::string s2 = s1.substr(3, 4);
  char ctr[20];
  strcpy(ctr, s2.c_str());
  cout << "ctr=" << ctr << endl;
  cout << "s1=" << s1 << ",s2=" << s2 << endl; // j++语言 语言
  s1.swap(s2);
  cout << "s1=" << s1 << ",s2=" << s2 << endl; // 语言 j++语言

  cout << s2.find(ctr) << endl;

  return 0;
}
