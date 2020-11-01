#include <stdio.h>
#include <math.h>

int main()
 {   int x=1;
     double  a=0, y=0, b=6;
 printf("\n   ---------------- \n");
 printf("    X\t\t   Y\n");
 printf("\n   ---------------- \n");
 for (a=0; a<=b; a+=0.5)
 {
     x=a;
     y=1/(1-sqrt(x));
     printf ("    %d\t    %7.2lf  \n",  x, y);
 }
 printf("\n   ---------------- \n");
}
