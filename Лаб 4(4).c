#include <stdio.h>
#include <math.h>

int main()
{
float y=0;
float x=1;
float b = 6;
float dx = 0.2;
printf("X\t\tY\n");
while (x<=b)
{
y=log10(x);
printf(" %f\t%9.2lf\n", x, y);
x+=dx;
}
    return 0;
}
