#include <stdio.h>
#include <math.h>


int main()
{
	int y,x,z,q,r,e;
	printf(" x=");
	scanf("%d",&x);
	printf("\n y=");
	scanf("%d",&y);
    z=x*y;
    q=fmod(x,y);
    r=y/x;
    e=floor(r);
	printf("\n Ціла частина від другого числа""\n%d",e);
	printf("\n Остача від ділення""\n%d",q);
  printf("\n Добуток чисел""\n%d",z);
}
