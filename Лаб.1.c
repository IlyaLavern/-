#include <stdio.h>

int main()
{
int a,b,c;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
if(a>b & a>c)
{
    printf("a ��������� �����");
}
else if(b>a & b>c)
{
    printf("b ��������� �����");
}
else if(c>b & c>a)
{
    printf("c ��������� �����");
}
else
{
    printf("N");
}
if(a==b & b==c)
{
    printf(" ������������ ");
}
else if((a==b & a!=c) || (a==c & a!=b) || (b==c & b!=a))
{
    printf(" ������������");
}
else if(a!=b && b!=c && c!=a)
{
    printf("  ������������\n");
}
else
{
    printf("N");
}
if(a+b>c & c+b>a & a+c>b)
{
    printf(" ��������� ����� ����������");
}
else
{
    printf(" ��������� �� ����� ����������\n");
}
    return 0;
}
