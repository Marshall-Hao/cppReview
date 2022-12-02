#include <iostream>
int main()
{
  std::cout << "Enter two numbers:";
  std::cout << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1;
  std::cin >> v2;
  std::cout << "The product of ";
  std::cout << v1 << " and " << v2 << " is " << v1 * v2;
  std::cout << std::endl;

  return 0;
}
