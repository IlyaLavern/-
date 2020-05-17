#include <stdio.h>
#include <math.h>

int main()
{
float a,y,b,c;
printf(" a=");
scanf("%f",&a);
printf(" b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
 y=(a-b)/(2*b+c)+1/a;


printf("\n Значення функції %f ",y);
       return 0;
}
