//
// Created by 尚泽 on 2025/12/19.
//

#ifndef C___VISITBASE_H
#define C___VISITBASE_H
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string id;
    char gender;
    int age;

public:
    void PrintInfo();
    void SetInfo(const string&, const string&, int, char);
    void SetName(string);
    void GetName();
    void SetId(string);
    void GetId();
};


#endif //C___VISITBASE_H
