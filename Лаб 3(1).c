#include <stdio.h>
#include <math.h>
int main()
{
float x,t;
printf("Введіть точку x=");
scanf("%f",&x);
if(x<-10)
{
t = 3*x*x*x-x*x;
printf("%f Виконується перша умова", t);
 }
else if((-10 <= x)&&(x <= 10))
{
  t =  sqrt(10-x);
printf("%f Виконується друга умова", t);
}
 else if  (x > 10)
{
     t = 2*x+1;
     printf("%f Виконується третя умова", t);
}
    return 0;
}
