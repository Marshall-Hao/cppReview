extern int ix = 1024; // Definition
int iy;               // Definition
extern int iz;        // Declaration
int main()
{
  // extern int ix2 = 1024;  // Error 在函数体内部，如果试图初始化一个由extern 关键字标记的变量，将引发错误。
  int iy2;        // Definition
  extern int iz2; // Declaration

  return 0;
}

// * 声明和定义的区別看起来也许微不足道，但实际上却非常重要。
// * 如果要在多个文件中 使用同一个变量，就必须将声明和定义分离。
// * 此时，变量的定义必须出现在且只能出现在
// * 一 个文件中，而其他用到该变量的文件必须对其进行声明，却绝对不能重复定义。