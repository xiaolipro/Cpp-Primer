#include <iostream>

int main(int argc, char const *argv[])
{
  // 算数类型
  bool boolValue = true || false;

  char charValue = 'X';        // 8bit
  wchar_t wcharValue = 'S';    // 16bit 宽字符
  char16_t char16Value = '是'; // 16bit unicode双字节
  char32_t char32Value = '的'; // 32bit unicode四字节

  short shortValue = 2131212;                           // 16bit?
  std::cout << "shortValue" << shortValue << std::endl; // 算数溢出 1111111111111111

  int intValue = 12821983;                   // 16bit?  看机器 32-16bit 64-32bit
  long longValue = 12321431;                 // 32bit
  long long longlongValue = 213124324532432; // 64bit

  float floatValue = 1.211231;             // 6位有效小数
  double doubleValue = 1.12432324;         // 10位有效小数
  long double longdoubleValue = 12.213124; // 10位有效小数

  // // signed & unsigned
  // unsigned char c1 = -1;
  // signed char c2 = 256;
  // std::cout << "c1" << c1 << std::endl;
  // std::cout << "c2" << c2 << std::endl;

  unsigned u = 10;
  int i = -42;
  std::cout << "u + i:" << u + i << std::endl;

  // 推断
  auto auto1 = L'a';   // wchar_t
  auto auto2 = u8"hi"; // utf-8
  auto auto3 = 42ULL;  // unsigned long long
  // auto auto4 = 1E - 1F; // float
  auto auto5 = 3.1415926L; // long double
  auto auto6 = 12321312L;  // long
  auto auto7 = 213LL;      // long long
  auto auto8 = "123";
  auto auto9 = '1';
  auto auto10 = L"a";
  auto auto11 = 3.12;
  auto auto12 = 3u;
  auto auto13 = 3.;
  auto auto14 = 3e-2;
  auto auto15 = 3e-2L;
  auto auto16 = 3.14L;
}
