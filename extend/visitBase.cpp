//
// Created by 尚泽 on 2025/12/19.
//

#include "visitBase.h"
#include <iostream>
using namespace std;

void Student::PrintInfo() const
{
    cout << "姓名：\t" << name << endl;
    cout << "学号：\t" << id << endl;
    cout << "年龄：\t" << age << endl;
    cout << "性别：\t" << gender << endl;
}

void Student::SetInfo(const string& name_, const string& id_, int age_, char gender_)
{
    name = name_;
    id = id_;
    age = age_;
    gender = gender_;
}

void Student::SetName(string name)
{
    this->name = name;
}

string Student::GetName() const
{
    return name;
}

void Student::SetId(string id)
{
    this->id = id;
}

string Student::GetId() const
{
    return id;
}

void UndergraduateStudent::PrintInfo() const
{
    Student::PrintInfo();
    cout << "专业：\t" << department << endl;
}

void UndergraduateStudent::SetInfo(const string& name, const string& id, int age, char gender, const string& department)
{
    Student::SetInfo(name, id, age, gender);
    this->department = department;
}

void GraduatedStudent::PrintInfo() const
{
    Student::PrintInfo();
    cout << "专业：\t" << department << endl;
    cout << "导师：\t" << advisor << endl;
}

void GraduatedStudent::SetInfo(const string& name_, const string& id_, int age_, char gender_,
                               const string& department_, const string& advisor_)
{
    Student::SetInfo(name_, id_, age_, gender_);
    department = department_;
    advisor = advisor_;
}

void runBaseVisited()
{
    Student s1;
    UndergraduateStudent s2;
    GraduatedStudent s3;
    s2.SetInfo("张三", "2023123456789", 20, 'M', "计算机科学与技术");
    s3.SetInfo("李四", "2023123456789", 22, 'F', "软件工程", "王教授");
    s2.PrintInfo();
    // cout << s2.name << endl; // 私有成员不能直接访问
    cout << s2.GetName() << endl;
    s2.SetName("王五");
    s2.PrintInfo();
}
