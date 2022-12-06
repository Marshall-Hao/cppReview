#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void read_int_vector()
{
  vector<int> ivec;
  int i;
  while (cin >> i)
  {
    ivec.push_back(i);
  }
  for (auto &c : ivec)
    cout << c << endl;
}

void read_string_vector()
{
  vector<string> svec;
  string s;
  while (cin >> s)
    svec.push_back(s);
  for (auto &c : svec)
    cout << c << endl;
}

int main()
{
  // read_int_vector();
  read_string_vector();
  return 0;
}

// * 要使用size_type，需首先指定它是由哪种类型定义的