//
// Created by ASUS on 2026/1/1.
//

#ifndef C___CITE_H
#define C___CITE_H
#include <iostream>
using namespace std;

class ACite
{
public:
    virtual void print()
    {
        cout << "A::print" << endl;
    }
};

class BCite : public ACite
{
public:
    void print() override
    {
        cout << "B::print" << endl;
    }
};

inline void printInfo(ACite& r)
{
    r.print();
}

void runCite();
#endif //C___CITE_H
