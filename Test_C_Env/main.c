#include <stdio.h>
#include <string.h>
/*
* 共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
*### 定义共用体####
    union [union tag]
    {
    member definition;
    member definition;
    ...
    member definition;
    } [one or more union variables];

union tag 是可选的，每个 member definition 是标准的变量定义，比如 int i; 或者 float f;
或者其他有效的变量定义。在共用体定义的末尾，最后一个分号之前，您可以指定一个或多个共用体变量，这是可选的。下面
*/

union Data // Data 变量存储一个整数，一个浮点数，一个字符串，在内存的相同位置，可以存储多个多种类型的书库
{

  int i;
  float f;
  char str[20];

} data;

int main()
{
  union Data data;
  printf("Memory size occupied by data: %d\n", sizeof(data));
  // printf("Memory size occupied by data : %d\n", sizeof(data));

  return 0;
}
