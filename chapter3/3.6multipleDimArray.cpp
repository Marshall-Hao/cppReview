#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void for_1()
{
  int ia[3][4] = {
      {0, 1, 2, 3},
      {4, 5, 6, 7},
      {8, 9, 10, 11}};

  for (size_t i = 0; i != 3; ++i)
    for (size_t j = 0; j != 4; ++j)
      cout << ia[i][j] << ' ';
  cout << '\n'
       << endl;

  for (const int(&row)[4] : ia) // * ini一个 int size 4 array的引用
  {
    for (const int &col : row) // * init 一个 int 的引用
      std::cout << col << '\t';
    std::cout << '\n'
              << std::endl;
  }

  // for (int(*ip)[4] : ia)
  //   for (int *p : *ip)
  //     cout << *p << '\t';
  // cout << endl;
  // * 指针是不能直接 ： 循环的
  for (int(*ip)[4] = ia; ip != ia + 3; ++ip) // * init一个 指向4个整数array的指针， 然后不断在往下移一个指针位置，直到此array最后一个元素
    for (int *p = *ip; p != *ip + 4; ++p)    // * init一个 指向整数类型的指针， 然后不断在往下移一个指针位置，直到此array最后一个元素
      cout << *p << '\t';
  cout << endl;
}

void for_2_typedef()
{
  int ia[3][4] = {
      {0, 1, 2, 3},
      {4, 5, 6, 7},
      {8, 9, 10, 11}};

  using int_array = int[4]; // * 定义了个类型别名

  // * int(*ip)[4] 因为 int_array 是 int[4] 4个整数array的type
  for (const int_array &row : ia) // * ini一个 int size 4 array的引用
  {
    for (const int &col : row) // * init 一个 int 的引用
      std::cout << col << '\t';
    std::cout << '\n'
              << std::endl;
  }

  // * 相当于 int(*ip)[4]4个整数array的type
  for (int_array *ip = ia; ip != ia + 3; ++ip) // * init一个 指向4个整数array的指针， 然后不断在往下移一个指针位置，直到此array最后一个元素
    for (int *p = *ip; p != *ip + 4; ++p)      // * init一个 指向整数类型的指针， 然后不断在往下移一个指针位置，直到此array最后一个元素
      cout << *p << '\t';
  cout << endl;

  // * 注意 115页指针的区别（*ip）[n] *ip[n] (&ip)[n] &ip[n] 区别 整体 和 单独
  for (auto pr = ia; pr != ia + 3; ++pr) // * 使用了auto的话不用定义指针了，因为 = ia 会被默认指想ia数组的第一个元素位置， 而第一个元素的类型又是int[4],所以会被自动转化为 int （*pr)[4]
  {
    for (auto pc = *pr; pc != *pr + 4; ++pc)
      std::cout << *pc << '\t';
    std::cout << std::endl;
  }

  for (const auto &row : ia)
  {
    for (const auto &col : row)
      std::cout << col << '\t';
    std::cout << std::endl;
  }
}

int main()
{
  for_2_typedef();
  return 0;
}