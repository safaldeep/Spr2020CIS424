/****************************************************************************
With aliasing, we cannot do constant propogation

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x = 14;
   
   int* y = &x;
   *y = 22;
   
   int z = 7 - x / 2;
   printf("z is %d", z);
   
}
