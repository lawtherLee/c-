//
// Created by 尚泽 on 2026/3/13.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


class Set
{
private:
    int* data; // 存储集合元素的动态数组
    int size; // 当前元素个数
    int capacity; // 数组容量

    [[nodiscard]] bool contains(const int val) const
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i] == val)
                return true;
        }
        return false;
    }

public:
    Set(int cap = 10) : size(0), capacity(cap)
    {
        data = new int[capacity];
    }

    ~Set()
    {
        delete[] data;
    }

    void add(int val)
    {
        if (contains(val)) return;
        if (size >= capacity)
        {
            capacity *= 2;
            int* newData = new int[capacity];
            for (int i = 0; i < size; i++) newData[i] = data[i];
            delete[] data;
            data = newData;
        }
        data[size++] = val;
    }

    void print() const
    {
        cout << "{ ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << ' ';
        }
        cout << " }" << endl;
    }

    // 集合并集
    Set operator+(const Set& other) const
    {
        Set res;
        for (int i = 0; i < size; i++) res.add(data[i]); // 先拷贝当前的
        for (int i = 0; i < other.size; i++) res.add(other.data[i]); // 再添加另一个集合不重复的
        return res;
    }

    Set operator-(const Set& other) const
    {
        Set res;
        for (int i = 0; i < size; i++)
        {
            if (!other.contains(data[i])) // 只保留不在other中的元素
            {
                res.add(data[i]);
            };
        }
        return res;
    }

    Set operator*(const Set& other) const
    {
        Set res;
        for (int i = 0; i < size; i++)
        {
            if (other.contains(data[i])) // 只保留同时存在的元素
            {
                res.add(data[i]);
            };
        }
        return res;
    }
};

inline void run_操作符重载之set集合()
{
    Set s1, s2;
    s1.add(1);
    s1.add(2);
    s1.add(3);
    s1.add(4);
    s2.add(3);
    s2.add(4);
    s2.add(5);
    s2.add(6);

    cout << "集合s1: ";
    s1.print();
    cout << "集合s2: ";
    s2.print();
}
