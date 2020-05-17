#include <stdio.h>
#include <math.h>


int main()
{
	float y,x,z,b;
	printf("Задайте x= ");
	scanf("%f",&x);
	printf("\nЗадайте y= ");
	scanf("%f",&y);
    printf("\nЗадайте z= ");
	scanf("%f",&z);

   b=1+cos(y-2)/pow(x,4)/2+pow(sin(z),2);

  printf("\n Значення функції\n%f",b);
}
