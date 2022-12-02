#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item;
  Sales_item total;
  std::cin >> item;
  total = item;
  while (std::cin >> item)
  {
    total += item;
  }
  std::cout << total << std::endl;
}