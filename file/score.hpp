#ifndef SCORE_HPP
#define SCORE_HPP
#include <fstream>
#include <iostream>
using namespace std;
inline void runScore() {
  char id[11], name[22];
  int score;
  ofstream outFile("score.txt", ios::out);
  if (!outFile) {
    cerr << "open file failed: score.txt" << endl;
    return;
  }
  cout << "请输入：学号 姓名 成绩\n" << endl;
  while (cin >> id >> name >> score) {
    outFile << id << " " << name << " " << score << endl;
  }
  cout << "数据写入完成" << endl;
  outFile.close();

  ifstream inFile("score.txt", ios::in);
  if (!inFile) {
    cerr << "open file failed: score.txt" << endl;
    return;
  }
  cout << "学号 姓名 成绩" << endl;
  while (inFile >> id >> name >> score) {
    cout << id << " " << name << " " << score << endl;
  }
  cout << "数据读取完成" << endl;
  inFile.close();
}

#endif