#include <stdio.h>
#include <math.h>

int main()
{
float y,x,z;
printf("x=");
scanf("%f",&x);
printf("z=");
scanf("%f",&z);
y=sqrt(log10(1-2*x)/(z+3));

if(x>1)
{
printf("%f Неможливо знайти відповідь, введіть число x з мінусом ", y);
}
else if(x<1)
{

printf("ваша відповідь: %f", y);
}

return 0;
}

