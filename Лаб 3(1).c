#include <stdio.h>
#include <math.h>
int main()
{
float x,t;
printf("������ ����� x=");
scanf("%f",&x);
if(x<-10)
{
t = 3*x*x*x-x*x;
printf("%f ���������� ����� �����", t);
 }
else if((-10 <= x)&&(x <= 10))
{
  t =  sqrt(10-x);
printf("%f ���������� ����� �����", t);
}
 else if  (x > 10)
{
     t = 2*x+1;
     printf("%f ���������� ����� �����", t);
}
    return 0;
}
