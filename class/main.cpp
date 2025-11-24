#include <iostream>
#include <string>

#include "enclosingClass.cpp.h"
using namespace std;
//
// Created by 尚泽 on 2025/9/30.
//
class myDate
{
public:
    myDate();
    myDate(int, int, int);

    void setDate(int, int, int);
    void setDate(myDate);

    myDate getDate();
    void setYear(int);
    int getMonth();

    void printDate() const;
    ~myDate();

private:
    int year, month, day;
};

myDate::myDate()
{
    year = 1970;
    month = 1;
    day = 1;
    cout << "myDate构造函数" << endl;
}

myDate::myDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void myDate::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void myDate::setDate(myDate d)
{
    year = d.year;
    month = d.month;
    day = d.day;
}

myDate myDate::getDate()
{
    return *this;
}

void myDate::setYear(int y)
{
    year = y;
}

int myDate::getMonth()
{
    return month;
}

void myDate::printDate() const
{
    cout << year << "/" << month << "/" << day << endl;
}

myDate::~myDate()
{
    cout << "myDate析构函数" << endl;
}

class Student
{
public:
    Student();
    Student(const Student& student); // 复制构造函数
    Student(string);
    void setStudent(string, myDate);
    void setName(string);
    string getName();
    void setBirthday(myDate);
    myDate getBirthday();
    void printStudent() const;
    ~Student();

private:
    string name;
    myDate birthday;
};

// 构造函数
Student::Student() : name("Noname"), birthday(myDate())
{
    cout << "Student构造函数" << endl;
}

Student::Student(string n) : name(n), birthday(myDate())
{
}

// 复制构造函数体
Student::Student(const Student& student)
{
    name = student.name;
    birthday = student.birthday;
}


void Student::setStudent(string s, myDate d)
{
    name = s;
    birthday.setDate(d);
}

void Student::setName(string n)
{
    name = std::move(n);
}

string Student::getName()
{
    return name;
}

void Student::setBirthday(myDate d)
{
    birthday.setDate(d);
}

myDate Student::getBirthday()
{
    return birthday;
}

void Student::printStudent() const
{
    cout << "姓名：" << name << "\t生日：";
    birthday.printDate();
    cout << endl;
}

Student::~Student()
{
    cout << "Student析构函数" << endl;
}

// 程序验证
int main()
{
    // Student stud;
    // Student ss[2];
    // int y, m, d, i;
    // string name;
    // Student* sp = &stud;
    // sp->setName("jack");
    // sp->printStudent();

    // 常规用法
    // stud.printStudent();
    // for (i = 0; i < 2; i++)
    //     ss[i].printStudent();
    //
    // for (i = 0; i < 2; i++)
    // {
    //     cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    //     cin >> name >> y >> m >> d;
    //     ss[i].setStudent(name, myDate(y, m, d));
    // }
    // for (i = 0; i < 2; i++)
    //     ss[i].printStudent();


    // 指针数组的初始化
    // Student* spointer[2] = {new Student(), &stud};
    // // 对象数组的初始化
    // Student sy[2] = {Student(), stud};
    // for (i = 0; i < 2; i++)
    // {
    //     spointer[i]->setName(std::to_string(i)); // 改了stud的name也不影响sy的stud
    //     spointer[i]->printStudent();
    // }
    // for (i = 0; i < 2; i++)
    //     sy[i].printStudent();

    // -------------------------------析构函数---------------------------------------
    // Student* ss = new Student[2];
    // delete []ss;
    //
    // Student* ss[2] = {new Student(), new Student()};
    // delete ss[1];
    // delete ss[2];


    // -------------------------------封闭类对象的创建与消亡---------------------------------------
    CCar car(48900, 17, 225);
    cout << "price = " << car.getPrice();
    cout << "\tCTyre.Radius = " << car.getCTyre().getRadius() << "\twidth = " << car.getCTyre().getWidth() << endl;

    // CCar car1;
    // cout << "price = " << car1.getPrice();
    // cout << "\tCTyre.Radius = " << car1.getCTyre().getRadius() << "\twidth = " << car1.getCTyre().getWidth();
    return 0;
}
