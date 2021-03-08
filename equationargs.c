#include <stdio.h>
#include <stdlib.h>

int main(int  argc, char *argv[])
{
   float a, b, x;
   // 
   if (argc != 3)
   {
      printf("Invaid inputs!\n");
      return 1;
   }
   a = atof(argv[1]);
   b = atof(argv[2]);
   if (a == 0 && b == 0)
   {
      printf("Every x is root!\n");
   }
   else if (a == 0 && b != 0)
   {
      printf("No roots!\n");
   }
   else
   {
      x = -b / a;
      printf("x = %.2f\n", x); 
   }
   return 0;
}
