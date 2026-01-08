#ifndef COPY_FILE_HPP
#define COPY_FILE_HPP
#include <fstream>
#include <iostream>
using namespace std;

inline void copyFile(const char *sourceFile, const char *destFile) {
  ifstream inFile(sourceFile, ios::in | ios::binary);
  if (!inFile) {
    cout << "open " << sourceFile << " error!" << endl;
    return;
  }
  ofstream outFile(destFile, ios::out | ios::binary);
  if (!outFile) {
    cout << "open " << destFile << " error!" << endl;
    inFile.close();
    return;
  }
  char c;
  while (inFile.get(c))
    outFile.put(c);
  inFile.close();
  outFile.close();
}
#endif