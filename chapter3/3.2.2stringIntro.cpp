#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// * 碰到空格不会认为是新的一行，只有换行符
void three2()
{
  string line;
  while (getline(cin, line))
  {
    cout << line << endl;
  }
}

// * 碰到空格会令其一行
void three2word()
{
  string line;
  while (cin >> line)
  {
    cout << line << endl;
  }
}

/*
  Whitespace characters include space, newline and tab.

The string input operator << will regard all three kinds of whitespace characters as delimiter, so the string read from the operator will contain no whitespace characters.

The getline function will regard only the newline character as delimiter, so the string read from getline function will contain no newline character but may contain space or tab.
*/

void compare()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 > s2)
  {
    cout << s1 << endl;
  }
  else
  {
    cout << s2 << endl;
  }
}

void compare_size()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1.size() > s2.size())
  {
    cout << s1 << endl;
  }
  else
  {
    cout << s2 << endl;
  }
}

void combine_string()
{
  string total, s;
  while (cin >> s)
  {
    total += s;
  }
  cout << total << endl;
}

void combine_space()
{
  string total, s;
  while (cin >> s)
  {
    total += s + ' ';
  }
  cout << total << endl;
}
int main()
{
  // three2();
  // three2word();
  // compare();
  // compare_size();
  // combine_string();
  combine_space();
  return 0;
}