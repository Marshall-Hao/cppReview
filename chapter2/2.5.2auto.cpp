#include <iostream>

int main()
{
  int i = 0, &r = i;
  const int ci = i, &cr = ci;

  auto a = r;        // int
  auto b = ci;       // int
  auto c = cr;       // int
  auto d = &i;       // int *
  auto e = &ci;      // const int *
  const auto f = ci; // const int
  auto &g = ci;      // const int &

  std::cout << "a: before = " << a;
  a = 42; // OK
  std::cout << "\tafter = " << a << std::endl;
  std::cout << "b: before = " << b;
  b = 42; // OK
  std::cout << "\tafter = " << b << std::endl;
  std::cout << "c: before = " << c;
  c = 42; // OK
  std::cout << "\tafter = " << c << std::endl;
  std::cout << "d: before = " << d;
  // d = 42;  // Error d是一个整数指针
  std::cout << "\tafter = " << d << std::endl;
  std::cout << "e: before = " << e;
  // e = 42;  // Error e是一个常量整数指针 *e的值不能变
  std::cout << "\tafter = " << e << std::endl;
  std::cout << "f: before = " << f;
  // f = 42;  // Error  f是一个整数常量不能在重新赋值了
  std::cout << "\tafter = " << f << std::endl;
  std::cout << "g: before = " << g;
  // g = 42;  // Error g是一个整数常量的引用 不能重新赋值了
  std::cout << "\tafter = " << g << std::endl;

  const int i = 42; // const int  整数常量
  const int m = 42;
  auto j = 1;                 // int   整数类型对象
  const auto &k = i;          // const int &  整数常量的常量引用 不可以改变引用的对象 也不能改变 引用对象的值得
  auto *p = &m;               // const int * 整数常量的指针 可以改变指向的地址（但必须是整数常量的地址） 不能改变地址的值
  const auto j2 = i, &k2 = i; // const int, const int & 整数常量， 整数常量的常量引用
  // * 要记住 auto同一个语句要保持 类型的一致w
  return 0;
}