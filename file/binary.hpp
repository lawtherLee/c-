#ifndef BINARY_HPP
#define BINARY_HPP
#include <climits>
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

  cout << "打开文件时位置指针：" << inFile.tellg() << endl;
  cout << "每个记录大小：" << sizeof(CStudent) << endl;

  CStudent stu;
  int count{}, nbyte{};
  cout << "学号 姓名 成绩\n";
  while (inFile.read((char *)&stu, sizeof(stu))) {
    cout << left << setw(10) << stu.id << " " << setw(20) << stu.name << " "
         << setw(3) << right << stu.score << endl;
    count++;
    nbyte += inFile.gcount();
  }

  cout << "读取文件结束时指针位置：" << inFile.tellg() << endl;
  inFile.clear(); // 清除流状态标志
  inFile.seekg(0);
  cout << "文件指针已重置到文件开头" << endl;
  // 需要重新read 否则stu保存的最后一行数据 重置指针后在读取还是最后一行
  inFile.read((char *)&stu, sizeof(stu));
  cout << left << setw(10) << stu.id << " " << setw(20) << stu.name << " "
       << setw(3) << right << stu.score << endl;
  cout << "指针位置：" << inFile.tellg() << endl;
  inFile.seekg(0, ios::end);
  cout << "共读取 " << count << " 条记录，占用 " << nbyte << " 字节" << endl;

  // 查找最高分和最低分
  inFile.clear();
  inFile.seekg(0);
  count = 0;

  int maxScore = INT_MIN, minScore = INT_MAX, maxNo{}, minNo{};
  while (inFile.read(((char *)&stu), sizeof(stu))) {
    if (stu.score > maxScore) {
      maxScore = stu.score;
      maxNo = count;
    } else if (stu.score < minScore) {
      minScore = stu.score;
      minNo = count;
    }
    count++;
  }

  inFile.clear();
  inFile.seekg(sizeof(stu) * maxNo,
               ios::beg);                 // 二进制文件随机访问的核心技巧
  inFile.read((char *)&stu, sizeof(stu)); // 读最高分
  cout << "最高分：" << maxNo << ": " << stu.id << " " << stu.name << " "
       << stu.score << endl;
  inFile.seekg(sizeof(stu) * minNo, ios::beg); // 读最低分
  inFile.read((char *)&stu, sizeof(stu));
  cout << "最低分：" << minNo << ": " << stu.id << " " << stu.name << " "
       << stu.score << endl;
  inFile.close();
}
#endif