#ifndef BINARY_HPP
#define BINARY_HPP
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
class CStudent {
public:
  char id[11];
  char name[21];
  int score;
};

inline void runBinaryStudent() {
  char ch;
  cout << "确实需要向文件中追加新数据吗（Y/N）？ ";
  cin >> ch;

  ofstream outFile;
  if (ch == 'Y' || ch == 'y') {
    outFile.open("student.dat", ios::app | ios::binary);
    cout << "已选择【追加模式】，将在文件末尾添加新数据" << endl;
  } else {
    outFile.open("student.dat", ios::out | ios::binary);
    cout << "已选择【重新记录模式】，将覆盖原有文件内容" << endl;
  }
  if (!outFile) {
    cout << "open student.dat error!" << endl;
  }
  CStudent stu;
  cout << "请输入学生信息（学号 姓名 成绩）：" << endl;
  while (cin >> stu.id >> stu.name >> stu.score) {
    outFile.write((char *)&stu, sizeof(CStudent));
  }
  outFile.close();
}

inline void readBinaryStudent() {

  ifstream inFile("student.dat", ios::in | ios::binary);
  if (!inFile) {
    cout << "open student.dat error!" << endl;
  }
  CStudent stu;
  int count{}, nbyte{};
  cout << "学号 姓名 成绩\n";
  while (inFile.read((char *)&stu, sizeof(stu))) {
    cout << left << setw(10) << stu.id << " " << setw(20) << stu.name << " "
         << setw(3) << right << stu.score << endl;
    count++;
    nbyte += inFile.gcount();
  }
  cout << "共读取 " << count << " 条记录，占用 " << nbyte << " 字节" << endl;
  inFile.close();
}
#endif