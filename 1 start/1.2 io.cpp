
// 标准库-io
// 包含两个基础类型istream, ostream
// 定义四个IO对象cin, cout, clog, cerr
#include <iostream>

int main()
{
  std::cout << "Enter two numbers:" << std::endl;

  int a, b;

  std::cin >> a >> b;

  std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
  return 0;
}
