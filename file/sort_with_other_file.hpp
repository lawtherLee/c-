#ifndef SORT_WITH_OTHER_FILE_HPP
#define SORT_WITH_OTHER_FILE_HPP
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;
constexpr int MAX_NUM = 1000;

class CStudent {
public:
  char id[11];
  char name[21];
  int score;
};

CStudent stu[MAX_NUM];

inline int MyCompare(const void *e1, const void *e2) {
  return (*(CStudent *)e1).score - (*(CStudent *)e2).score;
}

inline void runSortScore() {
  ifstream srcFile("score.txt", ios::in);
  if (!srcFile) {
    cout << "open score.txt  error!" << endl;
  }
  ofstream destFile("score_out.txt", ios::out);
  if (!destFile) {
    srcFile.close();
    cout << "open score_out.txt error!" << endl;
  }
  int n = 0;
  cout << "排序前：\n";
  while (srcFile >> stu[n].id >> stu[n].name >> stu[n].score) {
    cout << stu[n].id << " " << stu[n].name << " " << stu[n].score << endl;
    n++;
  }
  qsort(stu, n, sizeof(CStudent), MyCompare);
  cout << "排序后：\n";
  for (int i = 0; i < n; ++i) {
    cout << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
    destFile << stu[i].id << " " << stu[i].name << " " << stu[i].score << endl;
  }
  destFile.close();
  srcFile.close();
}
#endif
