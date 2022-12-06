#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// void vector_uppercase()
// {
//   vector<string> words;
//   string w;
//   while (cin >> w)
//     words.push_back(w);
//   for (auto &elem : words)
//   {

//     for (auto &c : elem)
//     {
//       c = toupper(c);
//     }
//     cout << elem << endl;
//   }
// }

// void ten_42()
// {
//   vector<int> v1(10, 42);
//   vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
//   vector<int> v3;
//   for (int i = 0; i != 10; ++i)
//     v3.push_back(42);

//   // The way with parentheses is prefered here. It contains less code.
// }

void sum_adjacent()
{
  vector<int> ivec;
  int i;
  while (cin >> i)
    ivec.push_back(i);
  for (decltype(ivec.size()) j = 0; j <= ivec.size() - 1; j += 2)
  {

    cout << "sum of "
         << ivec[j] << "and"
         << ivec[j + 1] << "are"
         << ivec[j] + ivec[j + 1]
         << endl;
  }
}

void sum_symmetric()
{
  vector<int> ivec;
  int i;
  while (cin >> i)
    ivec.push_back(i);
  int mid = ivec.size() / 2;
  if (mid % 2 != 0)
    ++mid;
  for (decltype(ivec.size()) j = 0; j < mid; ++j)
  {
    int total;
    if (j == ivec.size() - 1 - j)
    {
      total = ivec[j];
    }
    else
    {
      total = ivec[j] + ivec[ivec.size() - 1 - j];
    }

    cout << "sum of "
         << ivec[j] << "and"
         << ivec[ivec.size() - 1 - j] << " are"
         << total
         << endl;
  }
}

/*
  error, its an empty ivec , no elem inside, can only push back
*/
int main()
{
  // vector_uppercase();
  // sum_middle();
  sum_symmetric();
  return 0;
}