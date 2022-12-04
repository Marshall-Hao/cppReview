// std::cin >> int input_value;  // Error: variable must be defined before using for input
//  int input_value;
//  std::cin >> input_value;

// (b)
// int i = { 3.14 };   // Error: loss information in list initialization
// double d = { 3.14 };  // OK
// double d2 = { 3 };    // OK

// (c)
// double salary = wage = 9999.99;  // Error
// double salary, wage;
// salary = wage = 9999.99;

// (d)
// int i2 = 3.14;  // OK, `i2` is 3

#include <string>

std::string global_str; // 外置类型 由自己决定Empty string object
int global_int;         //如果是内置类型的变量未被显式初始化 0 定义于任何函数 体之外的变量被初始化为0
int main()
{
  int local_int;         // Undefined value 定义于函数体内的内置类型的对象如果没有初始化，则其值未定义
  std::string local_str; // Empty string object

  return 0;
}