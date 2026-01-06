#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
inline void runCin() {
  int n = 0;
  char ch;
  while ((ch = cin.get()) != EOF) // 当文件没有结束时继续进行循环
  {
    cout.put(ch);
    n++;
  }
  cout << "输入字符共计：" << n << endl;
}

inline void runGetline() {
  char buf[10];
  int i = 0;
  while (cin.getline(buf, 10)) {
    cout << ++i << ":" << buf << endl;
  }
  cout << "last:" << buf << endl;
}

// 截取电话号的数字部分
inline void runIgnore() {
  char str[30];
  while (cin.ignore(10, ':'), cin >> str) {
    cout << str << endl;
  }
}

// 日期格式转换
inline void runPeek() {
  string Months[13] = {"",        "January",  "February", "March",  "April",
                       "May",     "June",     "July",     "August", "September",
                       "October", "November", "December"};
  char ch;
  int year, month, day;
  while ((ch = cin.peek()) != EOF) { // 取输入的第一个字符窥视
    // 文西格式
    if (ch >= 'A' && ch <= 'Z') {
      string m;
      cin >> m >> day >> year;
      for (month = 0; month < 12 && m != Months[month]; ++month)
        ;
    } else {
      cin >> year;
      cin.ignore() >> month;
      cin.ignore() >> day;
    }
    cin.ignore();
    cout << setfill('0') << setw(2) << month;
    cout << '-' << setw(2) << day << '-' << setw(4) << year << endl;
  }
}