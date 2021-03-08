#include <stdio.h>

int main()
{
   float a, b, x;
   printf("a = ");
   scanf("%f", &a);
   printf("b = ");
   scanf("%f", &b);
   
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
