#include <stdio.h>
#include <locale.h>
int main()
{
int x,y,r;
printf("������ ����� �����: ");
scanf("%d",&x);

printf("������ ����� �����: ");
scanf("%d",&y);

printf("������ ���� �����: ");
scanf("%d",&r);
if ((x>y)&&(x>r))
{
printf("%d ������ ����� �����", x);
 }
else if ((y>x)&&(y>r))
{
  printf("%d ������ ����� �����", y);
}
  else if ((r>y)&&(r>x))
{
    printf("%d ������ ���� �����", r);
}

}
