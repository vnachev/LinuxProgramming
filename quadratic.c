#include <stdio.h>
#include <math.h>

int main()
{
   float a, b, c, x1, x2, D;
   printf("a = ");
   scanf("%f", &a);
   printf("b = ");
   scanf("%f", &b);
   printf("c = ");
   scanf("%f", &c);
   
   D = b*b - 4*a*c;
   
   if (fabs(D) < 0.01) // D == 0
   {
      x1 = x2 = -b/(2*a);
      printf("x1 = x2 = %.1f\n", x1);
   }
   else if (D < 0)
   {
      printf("No real roots!\n");
   }
   else
   {
      x1 = (-b + sqrt(D)) / (2*a);
      x2 = (-b - sqrt(D)) / (2*a);
      printf("x1 = %.1f\nx2 = %.1f\n", x1, x2);
   }
   return 0;
}
