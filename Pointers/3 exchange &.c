#include <stdio.h>

void changevalue(int *x)
{
  *x = 50;
}

int main()
{
  int num = 10;
  int bum = 100;
  changevalue(&num);
  changevalue(&bum);
  printf("The valu is %d\n", num);
  printf("The valu is %d\n", bum);

  return 0;
}
