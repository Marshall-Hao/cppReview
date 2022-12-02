#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item, newItem;

  if (std::cin >> item)
  {
    while (std::cin >> newItem)
    {
      if (item.isbn() == newItem.isbn())
      {
        item += newItem;
      }
      else
      {
        std::cout << item.isbn() << " record is " << item;
        item = newItem;
      }
    }
    std::cout << item.isbn() << " record is " << item;
  }
  else
  {
    std::cerr << " please enter the correct data" << std::endl;
    return -1;
  }
  return 0;
}