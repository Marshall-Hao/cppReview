#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// * 只需读操作， 无需写操作， 所以都是const
void sum_adjacent(const vector<int> &v)
{
  if (v.size() < 2)
    return;
  for (auto it = v.cbegin(); it != v.cend(); ++it)
    cout << *it + *(it + 1) << '\t';
  cout << endl;
}

void sum_symmetric(const vector<int> &v)
{
  // * If the vector has odd size, element in the middle will add to itself.
  auto mid = v.cbegin() + (v.cend() - v.cbegin() + 1) / 2;
  for (auto it = v.cbegin(); it != mid; ++it)
    // * 相当于指针 指向那个位置 那个数到开头的距离 那么对称的数就是 结尾减去那个距离
    cout << *it + *(v.cend() - 1 - (it - v.cbegin())) << '\t';
  cout << endl;
}

void get_grades()
{
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade)
    ++*(scores.begin() + grade / 10);
  for (const auto &elem : scores)
    cout << elem << ' ';
  cout << endl;
}

int main()
{
  get_grades();
  // vector<int> iv;
  // int i;
  // while (cin >> i)
  //   iv.push_back(i);
  // sum_adjacent(iv);
  // sum_symmetric(iv);

  return 0;
}

// *First, there is no operator + for two iterators. Second, for arithmetic types, using mid = (beg + end) / 2 may lead to overflow.

// * 迭代器的话是通过距离来进行下标转移的