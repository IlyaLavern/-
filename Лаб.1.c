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
    printf("a найбільший номер");
}
else if(b>a & b>c)
{
    printf("b найбільший номер");
}
else if(c>b & c>a)
{
    printf("c найбільший номер");
}
else
{
    printf("N");
}
if(a==b & b==c)
{
    printf(" рівносторонній ");
}
else if((a==b & a!=c) || (a==c & a!=b) || (b==c & b!=a))
{
    printf(" рівнобедрений");
}
else if(a!=b && b!=c && c!=a)
{
    printf("  різносторонній\n");
}
else
{
    printf("N");
}
if(a+b>c & c+b>a & a+c>b)
{
    printf(" Трикутник можна побудувати");
}
else
{
    printf(" Трикутник не можна побудувати\n");
}
    return 0;
}
