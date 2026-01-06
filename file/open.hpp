#ifndef OPEN_HPP
#define OPEN_HPP
#include <fstream>
#include <iostream>
using namespace std;

inline void runOpenFile() {
  ifstream inFile("..//readFile.txt", ios::in);
  if (!inFile) {
    cout << "open file failed: readFile.txt" << endl;
    return;
  }

  cout << "open file success: readFile.txt" << endl;
  inFile.close();

  ofstream outFile("..//writeFile.txt", ios::out);
  if (!outFile) {
    cout << "open file failed : writeFile.txt" << endl;
    return;
  }

  cout << "open file success: writeFile.txt" << endl;
  outFile.close();

  outFile.open("..//writeFile.txt", ios::out | ios::in);
  outFile.close();
}

inline void runReadFileWithLineNum() {
  char ch, filename[20];
  int count = 0;
  bool newline = true;
  cout << "请输入文件名：";
  cin >> filename;
  ifstream inFile(filename, ios::in);
  if (!inFile) {
    cerr << "open file failed: " << filename << endl;
    return;
  }
  while ((ch = inFile.get()) != EOF) {
    if (newline) {
      cout << setw(4) << ++count << ':';
      newline = false;
    }
    if (ch == '\n') {
      newline = true;
    }
    cout << ch;
  }
  inFile.close();
}
#endif