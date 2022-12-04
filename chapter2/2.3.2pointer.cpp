#include <iostream>

int main()
{
  int ival = 5, *p1 = &ival;

  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;
  ival = 10;
  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;

  *p1 = 3;
  std::cout << *p1 << std::endl;
  std::cout << ival << std::endl;

  int *p2 = p1;
  std::cout << p1 << std::endl;
  std::cout << *p1 << std::endl;
  std::cout << p2 << std::endl;
  std::cout << *p2 << std::endl;

  return 0;
}

/*
 A pointer is an object whose value is the adress of another object.

A reference is not an object. It is an alias of another object.
 */

/*
if (p) means if the pointer p is not null.

if (*p) means if the object pointed by the pointer is not false (which means the object is not null or zero etc.).
*/

/*
Because it would be expensive to maintain meta data about what constitutes a valid pointer and what doesn't, and in C++ you don't pay for what you don't want.
*/

// OK, a `void *` pointer can point to any type
// long *lp = &i;  // Error, a `long *` pointer can not point to `int *`