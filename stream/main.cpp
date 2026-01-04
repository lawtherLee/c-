#include <iostream>
using namespace std;
// 计算平均值
int main()
{
  int x, count, sum = 0;
  freopen("text123.txt", "r", stdin);
  for (count = 0; count < 10; count++)
  {
    cin >> x;
    if (cin.eof()) break;
    else sum += x;
  }
  cout << "前" << count << "个整数的平均值 = " << 1.0 * sum / count << endl;
  return 0;
}
