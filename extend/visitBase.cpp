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
