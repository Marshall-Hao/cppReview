

#include <iostream>
#include <vector>
#include <iterator>

// void array_to_vector()
// {
//   int ia[] = {1, 2, 3, 4, 5, 6, 7, 8};
//   // * 第一个指针 尾指针
//   std::vector<int> iv(std::begin(ia), std::end(ia));
//   for (const auto &i : iv)
//     std::cout << i << ' ';
//   std::cout << std::endl;
// }

void vector_to_array()
{
  std::vector<int> iv(8, 5);
  int ia[9];
  int *bg = ia;
  int *ed = ia + iv.size();
  for (const auto &i : iv)
  {

    *bg = i; //* *bg++ = i;
    ++bg;
  }

  for (bg = ia; bg != ed; ++bg)
    std::cout
        << *bg << ' ';
  std::cout << std::endl;
}

int main()
{
  vector_to_array();
  return 0;
}