#include <stdio.h>
#include <math.h>


int main()
{
	float y,x,z,b;
	printf("������� x= ");
	scanf("%f",&x);
	printf("\n������� y= ");
	scanf("%f",&y);
    printf("\n������� z= ");
	scanf("%f",&z);

   b=1+cos(y-2)/pow(x,4)/2+pow(sin(z),2);

  printf("\n �������� �������\n%f",b);
}
