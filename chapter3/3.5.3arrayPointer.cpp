/*
p1 += p2 -p1
pq = p1 + (p2 - p1)距离
The code move p1 to p2, it is the same with p1 = p2.

Any values are legal as long as both p1 and p2 point to elements in the same array.
*/
#include <iterator>
#include <iostream>
#include <vector>

void pointer_0()
{
  int arr[] = {1, 123, 34324, 1345, 123, 76765, 3123};
  int *pbegin = std::begin(arr);
  int *pend = std::end(arr);

  while (pbegin < pend)
  {
    *pbegin = 0;
    ++pbegin;
  }
  for (const int &e : arr)
    std::cout << e << std::endl;
}

void equal()
{
  int a1[5];
  int a2[5];
  for (int i = 0; i != 5; ++i)
    std::cin >> a1[i];
  for (int i = 0; i != 5; ++i)
    std::cin >> a2[i];

  int i = 0;
  // * array 需要一个个元素比较
  for (; i != 5; ++i)
    if (a1[i] != a2[i])
    {
      std::cout << "Array a1 is not equal to array a2." << std::endl;
      break;
    }
  if (i == 5)
    std::cout << "Array a1 is equal to array a2." << std::endl;

  std::vector<int> v1;
  std::vector<int> v2;
  int t;
  for (int i = 0; i != 5; ++i)
  {
    std::cin >> t;
    v1.push_back(t);
  }
  for (int i = 0; i != 5; ++i)
  {
    std::cin >> t;
    v2.push_back(t);
  }

  // * vector可以直接整体比较
  if (v1 == v2)
    std::cout << "Vector v1 is equal to vector v2." << std::endl;
  else
    std::cout << "Vector v1 is not equal to vector v2." << std::endl;
}
int main()
{
  // int arr[] = {1, 123, 34324, 1345, 123, 76765, 3123};
  pointer_0();
  return 0;
}