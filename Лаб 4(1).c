#include <stdio.h>
#include <math.h>

int main()

{
    float x,y,z,c,d,f;
do
{
    printf("x = ");
    scanf("%f",&x);
    printf("y = ");
    scanf("%f",&y);
    printf("z = ");
    scanf("%f",&z);
    d=((3*x)/z)-(2*y);

    f=sqrt(d)-y*z+sin(x*x);
    if (d<0 || z<=0)
    {
    printf ("Помилка\n\n");
    }
    else
    {
      printf ("%f",f);
    }
}while(d<0 || z<=0);
return 0;
}

