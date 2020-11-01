#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{setlocale(LC_CTYPE, "ukr");
   int a, b, i;
   double x;
   do{
    i=0;
   printf("Введіть ціле число a= \n");
   scanf ("%d", &a);
   printf("Введіть ціле число b = \n");
   scanf ("%d", &b);
     if(sqrt(a-b*b)+sqrt(a*b)<=0)
     {
         printf("Помилка! Відбувається ділення на 0 \n");
         i=1;
     }
      if(a<=0)
     {
         printf("Помилка! Відбувається ділення на 0 \n");
         i=1;
     }
      if(b<=0)
     {
         printf("Помилка! Відбувається ділення на 0 \n");
         i=1;
     }
   }
   while(i==1);
   {
       x=(sqrt(a-b*b)+sqrt(a*b));
   printf("Відповідь: %g \n", x);
   return 0;

   }
   }
