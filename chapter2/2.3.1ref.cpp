#include <iostream>

int main()
{
  int i, &ri = 0;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl; // 10 10 ri是i的引用 相当于 给i赋值10

  return 0;
}