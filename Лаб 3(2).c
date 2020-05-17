#include <stdio.h>
#include <locale.h>
int main()
{
int x,y,r;
printf("Введіть перше число: ");
scanf("%d",&x);

printf("Введіть друге число: ");
scanf("%d",&y);

printf("Введіть третє число: ");
scanf("%d",&r);
if ((x>y)&&(x>r))
{
printf("%d Більше перше число", x);
 }
else if ((y>x)&&(y>r))
{
  printf("%d Більше друге число", y);
}
  else if ((r>y)&&(r>x))
{
    printf("%d Більше третє число", r);
}

}
