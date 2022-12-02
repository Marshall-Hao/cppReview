#include <iostream>

void count_times()
{
  int currVal = 0, value = 0;

  if (std::cin >> currVal)
  {
    int cnt = 1;

    while (std::cin >> value)
    {
      if (value == currVal)
      {
        ++cnt;
      }
      else
      {
        std::cout << currVal << "happens"
                  << cnt << "times" << std::endl;
        currVal = value;
        cnt = 1;
      }
    }

    std::cout << currVal << "happens"
              << cnt << "times" << std::endl;
  }
}

void userType()
{
  int val1 = 0, val2 = 0;
  std::cin >> val1 >> val2;

  if (val1 < val2)
  {
    int val = val1;
    while (val <= val2)
    {
      std::cout << val;
      ++val;
    }
  }
}

int main()
{
  // count_times();
  userType();
  return 0;
}