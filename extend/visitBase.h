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
    void PrintInfo() const;
    void SetInfo(const string&, const string&, int, char);
    void SetName(string);
    string GetName() const;
    void SetId(string);
    string GetId() const;
};

class UndergraduateStudent : public Student
{
private:
    string department;

public:
    void PrintInfo() const;
    void SetInfo(const string&, const string&, int, char, const string&);
};


#endif //C___VISITBASE_H
