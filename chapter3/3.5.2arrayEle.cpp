#include <vector>
using std::vector;

void array_copy_vs_vector_copy()
{
  int ia[10];
  for (size_t i = 0; i != 10; ++i)
    ia[i] = i;
  // * 数组不能直接整个赋值，只能每个元素的复制
  int ia2[10];
  for (size_t i = 0; i != 10; ++i)
    ia2[i] = ia[i];

  vector<int> iv;
  for (int i = 0; i != 10; ++i)
    iv.push_back(i);
  // * 但是vector 可以
  vector<int> iv2(iv);
}

void index_as_value()
{
  int ia[10];
  for (size_t i = 0; i != 10; ++i)
    ia[i] = i;
}

int main()
{
  constexpr size_t array_size = 10;
  int ia[array_size]; // index from `0` to `array_size - 1`
  // for (size_t ix = 1; ix <= array_size; ++ix)
  //   ia[ix] = ix;
  for (size_t ix = 0; ix < array_size; ++ix)
    ia[ix] = ix + 1;

  return 0;
}

/*
  If the scores array was defined inside a function, then the value of each element is undefined. If the scores array was defined outside any function, then the value of each element is 0.
*/