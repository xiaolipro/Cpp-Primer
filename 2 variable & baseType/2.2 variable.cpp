#include <iostream>

int main(int argc, char const *argv[])
{

  // 变量定义
  int sum = 0, sum2; // sum = sum2 = 0
  std::cout << "sum = sum2 = 0:" << (sum == sum2) << std::endl;
  // error double a = b = 3.13;

  // 列表初始化
  int num1 = 0;
  int num2 = {0};
  int num3{0};
  int num4(0);

  // 默认值
  int a; // 包含了声明，定义（默认）??? 不确定的值
  std::cout << "a:" << a << std::endl;
  int _;
  extern int a2; // 仅声明
  return 0;
}
