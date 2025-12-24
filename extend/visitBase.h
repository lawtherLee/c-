//
// Created by 尚泽 on 2025/12/19.
//

#ifndef C___VISITBASE_H
#define C___VISITBASE_H
#include <string>
#include <iostream>
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

class GraduatedStudent : public Student
{
private:
    string department;
    string advisor;

public:
    void PrintInfo() const;
    void SetInfo(const string& name_, const string& id_, int age_, char gender_, const string& department_,
                 const string& advisor_);
};

void runBaseVisited();

// ------------------------------------------- end ---------------------------------------------------

class employee
{
    short age;
    float salary;

protected:
    string name;

public:
    employee(short age, float salary, string name)
    {
        this->age = age;
        this->salary = salary;
        this->name = name;
    }

    void print() const
    {
        cout << "\n" << name << ":\t";
        cout << age << ":\t";
        cout << salary;
    }

    ~employee()
    {
    }
};

class manager : public employee
{
    int level;

public:
    manager(short age, float salary, string name, int level) : employee(age, salary, name)
    {
        this->level = level;
    }

    void print() const
    {
        employee::print();
        cout << ":\tlevel:" << level;
    }
};

class engineer : public employee
{
    char speciality, adegree;

public:
    engineer(short age, float salary, string name, char speciality, char adegree) : employee(age, salary, name)
    {
        this->speciality = speciality;
        this->adegree = adegree;
    }

    void print() const
    {
        employee::print();
        cout << ":\tspeciality:" << speciality;
        cout << ":\tadegree:" << adegree;
    }
};

enum ptitle { PS, GM, VPS, VGM };

class director : public manager
{
    ptitle post;

public:
    director(short age, float salary, string name, int level, ptitle post) : manager(age, salary, name, level)
    {
        this->post = post;
    }

    void print() const
    {
        manager::print();
        cout << "\tpost:" << post << endl;
    }
};

void runBaseVisited2();

#endif //C___VISITBASE_H
