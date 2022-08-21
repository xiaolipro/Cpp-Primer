#include <iostream>

int main(int argc, char const *argv[])
{
  // 引用即别名
  int n = 100;
  int &ref_n = n; // 定义时必须赋值
  std::cout << ref_n << std::endl;

  int &r = n, n2 = 100;
  std::cout << r << std::endl;         // 100
  std::cout << n2 << std::endl;        // 100
  std::cout << (r == n2) << std::endl; // true

  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  std::cout << (r2 == 3.14159) << std::endl; // false
  std::cout << (r2 == r1) << std::endl;      // true
  std::cout << (i == r2) << std::endl;       // true
  std::cout << (r1 == d) << std::endl;       // true

  // 指针
  return 0;
}
