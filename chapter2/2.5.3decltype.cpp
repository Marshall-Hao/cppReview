#include <iostream>

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;   // c是int
  decltype((b)) d = a; // d是int&
  std::cout << a << std::endl;
  ++c;
  ++d;
  std::cout << c << d << std::endl;
  std::cout << a << std::endl;

  decltype(a) c = a;     // `c` is `int`
  decltype(a = b) d = a; // `d` is `int &` to a, the expression is not evaluated 表达式所以是引用 类型根据左边的来定

  std::cout << a << " " << b << " " << c << " " << d << std::endl; // 3 4 3 3
}

/*
  auto will ignore the top-level const qualifier and reference.
  * 会忽略顶层const 只会看值的类型

decltype will include top-level const and reference.
* 会囊括整个类型包括是否为常量
same:
  int i;
auto a1 = i;     // int
decltype(i) d1;  // int


different:
int i, &j = i;
auto a2 = j;     // int
decltype(j) d2;  // int &

const int i;
auto a3 = i;          // int
decltype(i) d3 = 42;  // const int
*/