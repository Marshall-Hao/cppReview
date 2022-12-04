#include <iostream>

int main()
{
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i)
    sum += i;                                // 这个i是 for这个作用域里面的
  std::cout << i << " " << sum << std::endl; // 100 45 这个i是main这个作用域内的

  return 0;
}