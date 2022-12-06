#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void x_substitude()
{
  string line;
  cin >> line;
  for (auto &s : line)
  {
    s = 'x';
  }
  cout << line;
}

void x_substitude_char()
{
  string line;
  cin >> line;
  for (char &s : line)
  {
    s = 'x';
  }
  cout << line;
}

void change_with_while()
{
  std::string s;
  if (std::cin >> s)
  {
    std::string::size_type pos = 0; // also `decltype(s.size()) pos = 0`
    while (pos != s.size())
      s[pos++] = 'X';
  }
  std::cout << s << std::endl;
}

/*
  不合法，都不知道是个空emptyString
  */

void remove_punct()
{
  string line;
  cin >> line;
  for (auto &c : line)
  {
    if (ispunct(c))
      c = '\0'; // * null character
  }
  cout << line;
}

/*
 3.11  The range for is legal. The type of c is const char &.  char常量引用 引用的对象不能变

*/
int main()
{
  // x_substitude();
  // x_substitude_char();
  remove_punct();
  return 0;
}