#include <iostream>

void minus1002100()
{
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
  {
    sum += i;
  }

  std::cout << sum;
}

void userType()
{
  int val1 = 0, val2 = 0;
  std::cin >> val1 >> val2;
  for (int i = val1; i >= val2; --i)
  {
    std::cout << i;
  }
  for (int i = val1; i <= val2; ++i)
  {
    std::cout << i;
  }
  // std::cout << val1;
}

int main()
{
  minus1002100();
  userType();
  return 0;
}

/*
 区别
 while 没有一个局部变量
 for 会有一个局部变量 执行完就销毁
*/