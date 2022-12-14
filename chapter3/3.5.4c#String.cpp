/*
Since there is no null character at the end, the program will print all the characters in ca and continue print whatever in memeory until it find a null character.
* 要小心 char[]类型一定要以''空字符结尾
*/

/*
The value of a pointer is the address of the object it points. When adding two pointers, the result is sum of two address which means an unknown place in memory. Thus adding two pointers are meaningless.
  两个内存地址相加是没有意义的

*/

#include <string>
#include <iostream>
void compare()
{
  std::string s1, s2;
  std::cin >> s1 >> s2;
  if (s1 == s2)
    std::cout << "Two strings are equal." << std::endl;
  else
    std::cout << "Two strings are not equal." << std::endl;

  char cs1[100];
  char cs2[100];
  std::cin >> cs1 >> cs2;
  // * 相等会是0 ！0 会给false
  if (!strcmp(cs1, cs2))
    std::cout << "Two C-style strings are equal." << std::endl;
  else
    std::cout << "Two C-style strings are not equal." << std::endl;
}

int main()
{
  //* 直接以字符 所以 没关系
  char s1[] = "Hello";
  char s2[] = "World";
  char s3[11]; // * 多余的位置是给空字符
  strcpy(s3, s1);
  strcat(s3, s2);
  std::cout << s3 << std::endl;

  return 0;
}