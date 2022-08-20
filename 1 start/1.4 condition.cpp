#include <iostream>

int main(int argc, char const *argv[])
{
  int sum = 0, i = 0;
  while (i <= 10)
  {
    sum += i;
    i++;
  }
  std::cout << sum << std::endl;

  for (int i = 0; i <= 10; i++)
  {
    sum += i;
  }
  std::cout << sum << std::endl;

  // 从控制台读，直到读到非数字或者ctrl+z,entry 表达式才为假
  while (std::cin >> i)
  {
    sum += i;
  }

  std::cout << sum << std::endl;

  if (sum > 300)
  {
    std::cout << "sum > 300" << std::endl;
  }
  return 0;
}
