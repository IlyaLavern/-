#include <stdio.h>
#include <math.h>

int main()
 {float y=0, x=1, a=0, b=6, dx=0.5;
 printf("\n   ---------------- \n");
 printf("    X\t\tY\n");
 printf("\n   ----------------  \n");
 for (a=0; a<=b; a+=dx)
 {
     x=a;
     y=1/(1-sqrt(x));
     printf ("    %f \t   %7.2lf  \n",  x, y);
 }
 printf("\n   ----------------  \n");
}
