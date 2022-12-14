#include <string>
using std::string;
int txt_size();

int main()
{
  unsigned buf_size = 1024;

  // int ia1[buf_size];            // Error: `buf_size` must be `constexpr`
  int ia2[4 * 7 - 14]; // OK
  // int ia3[txt_size()];          // Error: `txt_size()` must be a `constexpr` function
  // char st[11] = "fundamental";  // Error: the size of string is 12 with a trailing '\0'
  string sa2[10]; // ten elements of empty string
  int ia3[10];    // ten elements of undefined value 在方程内初始值为undefined
  return 0;
}

string sa[10]; // ten elements of empty string
int ia[10];    // ten elements of 0

/*
The size of the array is fixed and must be known when defined.
Character array needs to leave space for null character at the end.
Arrays can not be copied or assigned as a whole.
Array can not be constructed with the same values like the constructor of vector when defined.
The size of array must be calculated when using (sometimes cannot be calculated at all) instead of calling a size() method.
*/