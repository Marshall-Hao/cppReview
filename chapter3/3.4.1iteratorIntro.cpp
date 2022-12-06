#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void text()
{
  std::vector<std::string> text;

  std::string line;
  while (getline(std::cin, line))
    text.push_back(line);

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) // * 相当于 (*it).empty()
    for (auto &c : *it)
      c = toupper(c);

  for (auto &elem : text)
    if (elem.empty())
      std::cout << std::endl;
    else
      std::cout << elem << " ";
}

void iterator_double()
{
  vector<int> numbers(10);
  int i;
  for (auto &n : numbers)
    cin >> n;
  for (auto it = numbers.begin(); it != numbers.end(); ++it)
    *it *= 2;
  for (auto &n : numbers)
    cout << n << endl;
}

int main()
{
  iterator_double();
  return 0;
}