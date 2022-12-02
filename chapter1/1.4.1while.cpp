#include <iostream>
void fifty2hundred()
{
  int sum = 0, val = 50;
  // check if the val is less or equal to 100
  while (val <= 100)
  {
    sum += val;
    ++val;
  }

  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;
}

void print1020()
{
  int val = 10;
  while (val >= 0)
  {
    std::cout << val;
    --val;
  }
}

void userType()
{
  int val1 = 0, val2 = 0;
  std::cin >> val1 >> val2;
  while (val1 > val2)
  {
    std::cout << val1;
    --val1;
  }
  while (val1 < val2)
  {
    std::cout << val1;
    ++val1;
  }
  std::cout << val1;
}

int main()
{
  fifty2hundred();
  print1020();
  userType();
  return 0;
}